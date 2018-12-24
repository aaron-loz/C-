#include "server.h"
#include <QtWidgets>
#include <QtNetwork/QtNetwork>
#include <stdlib.h>

//This is to announce the members without declaration
server::server(QWidget *parent)
    : QDialog(parent)
    , statusLabel(new QLabel)
    , tcpServer(Q_NULLPTR)
    , networkSession(0)
{
    //window Flags change the style of window, with a type for the main and a hint that customizes the top
    setWindowFlags(windowFlags() & ~Qt::WindowContextHelpButtonHint);
    //statuslabel is set how to interact with user if it has text
    statusLabel->setTextInteractionFlags(Qt::TextBrowserInteraction);
    //all of that can be handled in the form

    QNetworkConfigurationManager manager;
    //the if statement checks if the capabilities are correct and a network session can be done
    if (manager.capabilities() & QNetworkConfigurationManager::NetworkSessionRequired) {
        // Get saved network configuration
        QSettings settings(QSettings::UserScope, QLatin1String("QtProject"));
        //QSettings has the settings. Look at doc for more.
        //beginGroup adds the settings to QtNetwork
        settings.beginGroup(QLatin1String("QtNetwork"));
        //id turns the value of the settings, which are in Default, into a string
        const QString id = settings.value(QLatin1String("DefaultNetworkConfiguration")).toString();
        //resets the group so no harmful changes are made to the default
        settings.endGroup();
        //declares a network config and sets it to whatever the manager's config id is
        QNetworkConfiguration config = manager.configurationFromIdentifier(id);
        // If the config state is true and saved network configuration  not currently discovered use the system default
        if ((config.state() & QNetworkConfiguration::Discovered) !=
            QNetworkConfiguration::Discovered) {
            //uses the default configuration within manager
            config = manager.defaultConfiguration();
        }
        //network session is initialized and connected to session open SLOT and the default Opened SIGNAL
        networkSession = new QNetworkSession(config, this);
        connect(networkSession, &QNetworkSession::opened, this, &server::sessionOpened);
        //label gets text saying that session is being opened
        statusLabel->setText(tr("Opening network session."));
        networkSession->open();
        //!Note, this technically opens up two network sessions but that's fine Yay memory allocation!
    }
    else {//if none of this can be done then it opens session straight away
            sessionOpened();}

    // This is a list of data that can be sent to the client. It's pretty random
    fortunes << tr("You've been leading a dog's life. Stay off the furniture.")
             << tr("You've got to think about tomorrow.")
             << tr("You will be surprised by a loud noise.")
             << tr("You will feel hungry again in another hour.")
             << tr("You might have mail.")
             << tr("You cannot kill time without injuring eternity.")
             << tr("Computers are not intelligent. They only think they are.");

//!ui
    //The quit Button is created in the UI. This can be handled in the form
    QPushButton *quitButton = new QPushButton(tr("Quit"));
    //default of a pushbutton is to do the pressed slot.
    quitButton->setAutoDefault(false);
    //!So set that to false and connect it to close the dialog
    connect(quitButton, &QAbstractButton::clicked, this, &QWidget::close);
    //!when a tcpserver gets a new connection, it sends the packets
    connect(tcpServer,&QTcpServer::newConnection,this,&server::sendFortune);

    //lays out buttons horizontally, for resizing purposes. Can be in ui form
    QHBoxLayout *buttonLayout = new QHBoxLayout;
    buttonLayout->addStretch(1);
    buttonLayout->addWidget(quitButton);
    buttonLayout->addStretch(1);

    //lines up widgets vertically
    QVBoxLayout *mainLayout = Q_NULLPTR;
    if (QGuiApplication::styleHints()->showIsFullScreen() || QGuiApplication::styleHints()->showIsMaximized()) {
        //if the window is maximized or in fullscreen, changes layout appropriately. use ui form
        QVBoxLayout *outerVerticalLayout = new QVBoxLayout(this);
        outerVerticalLayout->addItem(new QSpacerItem(0, 0, QSizePolicy::Ignored, QSizePolicy::MinimumExpanding));
        QHBoxLayout *outerHorizontalLayout = new QHBoxLayout;
        outerHorizontalLayout->addItem(new QSpacerItem(0, 0, QSizePolicy::MinimumExpanding, QSizePolicy::Ignored));
        QGroupBox *groupBox = new QGroupBox(QGuiApplication::applicationDisplayName());
        mainLayout = new QVBoxLayout(groupBox);
        outerHorizontalLayout->addWidget(groupBox);
        outerHorizontalLayout->addItem(new QSpacerItem(0, 0, QSizePolicy::MinimumExpanding, QSizePolicy::Ignored));
        outerVerticalLayout->addLayout(outerHorizontalLayout);
        outerVerticalLayout->addItem(new QSpacerItem(0, 0, QSizePolicy::Ignored, QSizePolicy::MinimumExpanding));
    }
    else{//if not then it just has a regular layout
        mainLayout = new QVBoxLayout(this);}

    //then that work is put into the layout
    mainLayout->addWidget(statusLabel);
    mainLayout->addLayout(buttonLayout);
    //seets the title of the ui
    setWindowTitle(QGuiApplication::applicationDisplayName());
}

server::~server()
{

}
void server::sessionOpened()
{
    // Save the used configuration if networkSession is open
    if (networkSession) {
        QNetworkConfiguration config = networkSession->configuration();
        QString id;
        if (config.type() == QNetworkConfiguration::UserChoice)
            id = networkSession->sessionProperty(QLatin1String("UserChoiceConfiguration")).toString();
        else//if the config is done by the user, then save that. Else id is the config Identifier
            id = config.identifier();
        //then the settings are saved into the settings
        QSettings settings(QSettings::UserScope, QLatin1String("QtProject"));
        settings.beginGroup(QLatin1String("QtNetwork"));
        settings.setValue(QLatin1String("DefaultNetworkConfiguration"), id);
        settings.endGroup();
    }

    tcpServer = new QTcpServer(this);
    //starts the server up with listen()
    if (!tcpServer->listen()) {
        QMessageBox::critical(this, tr("Fortune Server"),
                              tr("Unable to start the server: %1.")
                              .arg(tcpServer->errorString()));
        close();
        return;
    }
    QString ipAddress;
    //The ip Addresses of the clients are copied to the list
    QList<QHostAddress> ipAddressesList = QNetworkInterface::allAddresses();
    // looks throught the list of addresses,
    for (int i = 0; i < ipAddressesList.size(); ++i) {
        //if  not the local host, put iPAddress in QString
        if (ipAddressesList.at(i) != QHostAddress::LocalHost &&
            ipAddressesList.at(i).toIPv4Address()) {
            ipAddress = ipAddressesList.at(i).toString();
            break;
        }
    }
    //if ipAddress is empty, uses local host
    if (ipAddress.isEmpty())
        ipAddress = QHostAddress(QHostAddress::LocalHost).toString();
    //Then, puts ipAddress in the thing
    statusLabel->setText(tr("The server is running on\n\nIP: %1\nport: %2\n\n"
                            "Run the Fortune Client example now.")
                         .arg(ipAddress).arg(tcpServer->serverPort()));
}

void server::sendFortune()
{
    //the QDataStream and QByteArray are created for streaming the packets
    QByteArray block;
    QDataStream out(&block, QIODevice::WriteOnly);
    //sets DataStream to Qt 4.0
    out.setVersion(QDataStream::Qt_4_0);
    //puts stuff in DataStream. quint16 is 16bit, and works on everything
    out << (quint16)0;
    qDebug()<<(quint16)0;
    out << fortunes.at(qrand() % fortunes.size());
    qDebug()<<fortunes.at(qrand() % fortunes.size());
    //this tries to seek out the socket
    out.device()->seek(0);
    //transmit more data to DataStream
    out << (quint16)(block.size() - sizeof(quint16));
    //creates a socket to connect to the next pending client
    QTcpSocket *clientConnection = tcpServer->nextPendingConnection();
    //if client disconnects, delete the socket
    connect(clientConnection, &QAbstractSocket::disconnected,
            clientConnection, &QObject::deleteLater);
    //writes to the client the block of data, and then disconnects
    clientConnection->write(block);
    clientConnection->disconnectFromHost();

//!OK, now write your own shit!
}
