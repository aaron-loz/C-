#include "client.h"
#include "ui_client.h"
#include <QtWidgets>
#include <QtNetwork>

Client::Client(QWidget *parent) :
    QMainWindow(parent),//need qtWidgets to add these params
    ui(new Ui::Client),
    hostCombo(new QComboBox),
    portLineEdit(new QLineEdit),
    getFortuneButton(new QPushButton(tr("Get Server Fortune"))),
    tcpSocket(new QTcpSocket(this)),
    blockSize(0),
    networkSession(Q_NULLPTR)
{
    setWindowFlags(windowFlags()& ~Qt::WindowContextHelpButtonHint);
    hostCombo->setEditable(true);
    //find out this particular machines name

    QString name =QHostInfo::localHostName();
    if(!name.isEmpty())
    {//it puts the server name into the dropdown
        hostCombo->addItem(name);
        //writes the local domain, if it isn't empty, adds it too
        QString domain = QHostInfo::localDomainName();
        if (!domain.isEmpty()){
            hostCombo->addItem(name + QChar('.') + domain);}
    }
    //if name is not localhost, adds localhost
    if (name != QLatin1String("localhost")){
        hostCombo->addItem(QString("localhost"));}
    // find out IP addresses of this machine
    QList<QHostAddress> ipAddressesList = QNetworkInterface::allAddresses();
    // adds non-localhost addresses to combobox
    for (int i = 0; i < ipAddressesList.size(); ++i) {
        if (!ipAddressesList.at(i).isLoopback())
            hostCombo->addItem(ipAddressesList.at(i).toString());
    }
    // add localhost addresses to combobox
    for (int i = 0; i < ipAddressesList.size(); ++i) {
        if (ipAddressesList.at(i).isLoopback())
            hostCombo->addItem(ipAddressesList.at(i).toString());
    }
    //makes the QLinEdit only accept numbers between 1 and 65535
    portLineEdit->setValidator(new QIntValidator(1, 65535, this));
//!ui
    //sets label text and has dropbox paired with it
    QLabel *hostLabel = new QLabel(tr("&Server name:"));
    hostLabel->setBuddy(hostCombo);
    QLabel *portLabel = new QLabel(tr("S&erver port:"));
    portLabel->setBuddy(portLineEdit);

    //This writes the label
    statusLabel = new QLabel(tr("This examples requires that you run the "
                                "Fortune Server example as well."));
   //sets some buttons to default and disables button until params met
    getFortuneButton->setDefault(true);
    getFortuneButton->setEnabled(false);
   //sets up buttons at bottom
    QPushButton *quitButton = new QPushButton(tr("Quit"));
    QDialogButtonBox *buttonBox = new QDialogButtonBox;
    buttonBox->addButton(getFortuneButton, QDialogButtonBox::ActionRole);
    buttonBox->addButton(quitButton, QDialogButtonBox::RejectRole);
//!Not ui
//connects the port line edit's text change with satisfying params of fortune button
    connect(portLineEdit, &QLineEdit::textChanged,
            this, &Client::enableGetFortuneButton);
    //when getFortuneButton is clicked, starts the requestnewfortune slot
    connect(getFortuneButton, &QAbstractButton::clicked,
            this, &Client::requestNewFortune);
    //connects quit button to quit
    connect(quitButton, &QAbstractButton::clicked, this, &QWidget::close);
    //when the socket is ready,starts the readFortune slot
    connect(tcpSocket, &QIODevice::readyRead, this, &Client::readFortune);
    //defines the errorsignals to be connected
    typedef void (QAbstractSocket::*QAbstractSocketErrorSignal)(QAbstractSocket::SocketError);
    connect(tcpSocket, static_cast<QAbstractSocketErrorSignal>(&QAbstractSocket::error),
            this, &Client::displayError);
//!ui
    //setsup mainlayout and resizing properties
    QGridLayout *mainLayout = Q_NULLPTR;
    if (QGuiApplication::styleHints()->showIsFullScreen() || QGuiApplication::styleHints()->showIsMaximized()) {
        QVBoxLayout *outerVerticalLayout = new QVBoxLayout(this);
        outerVerticalLayout->addItem(new QSpacerItem(0, 0, QSizePolicy::Ignored, QSizePolicy::MinimumExpanding));
        QHBoxLayout *outerHorizontalLayout = new QHBoxLayout;
        outerHorizontalLayout->addItem(new QSpacerItem(0, 0, QSizePolicy::MinimumExpanding, QSizePolicy::Ignored));
        QGroupBox *groupBox = new QGroupBox(QGuiApplication::applicationDisplayName());
        mainLayout = new QGridLayout(groupBox);
        outerHorizontalLayout->addWidget(groupBox);
        outerHorizontalLayout->addItem(new QSpacerItem(0, 0, QSizePolicy::MinimumExpanding, QSizePolicy::Ignored));
        outerVerticalLayout->addLayout(outerHorizontalLayout);
        outerVerticalLayout->addItem(new QSpacerItem(0, 0, QSizePolicy::Ignored, QSizePolicy::MinimumExpanding));
    } else {
        mainLayout = new QGridLayout(this);
    }
    mainLayout->addWidget(hostLabel, 0, 0);
    mainLayout->addWidget(hostCombo, 0, 1);
    mainLayout->addWidget(portLabel, 1, 0);
    mainLayout->addWidget(portLineEdit, 1, 1);
    mainLayout->addWidget(statusLabel, 2, 0, 1, 2);
    mainLayout->addWidget(buttonBox, 3, 0, 1, 2);

    setWindowTitle(QGuiApplication::applicationDisplayName());
//!Not ui
    // sets LineEdit as focus after initialization
    portLineEdit->setFocus();

    QNetworkConfigurationManager manager;
    if (manager.capabilities() & QNetworkConfigurationManager::NetworkSessionRequired) {
        // Get saved network configuration
        QSettings settings(QSettings::UserScope, QLatin1String("QtProject"));
        settings.beginGroup(QLatin1String("QtNetwork"));
        const QString id = settings.value(QLatin1String("DefaultNetworkConfiguration")).toString();
        settings.endGroup();

        // If the saved network configuration is not currently discovered use the system default
        QNetworkConfiguration config = manager.configurationFromIdentifier(id);
        if ((config.state() & QNetworkConfiguration::Discovered) !=
            QNetworkConfiguration::Discovered) {
            config = manager.defaultConfiguration();
        }
        //starts up networksession and once opened will signal sessionOpened()
        networkSession = new QNetworkSession(config, this);
        connect(networkSession, &QNetworkSession::opened, this, &Client::sessionOpened);
        //disables fortune button and changes label text until networksession is open
        getFortuneButton->setEnabled(false);
        statusLabel->setText(tr("Opening network session."));
        networkSession->open();
    }
    ui->setupUi(this);
}
void Client::requestNewFortune()
{
    //resets socket and data
    getFortuneButton->setEnabled(false);
    blockSize = 0;
    tcpSocket->abort();
    //connects to server
    tcpSocket->connectToHost(hostCombo->currentText(),
                             portLineEdit->text().toInt());
}

void Client::readFortune()
{//once socket is ready, datastream starts
    QDataStream in(tcpSocket);
    in.setVersion(QDataStream::Qt_4_0);
//if blocksize is reset checks socket bytes and writes data to blocksize
    if (blockSize == 0) {//if isnt 16bit stream, stop
        if (tcpSocket->bytesAvailable() < (int)sizeof(quint16))
            return;
        in >> blockSize;
    }
    if (tcpSocket->bytesAvailable() < blockSize)
        return;//if socketbytes les than blocksize, stop slot
    //inStream writes into nextFortune, which displays in qlabel
    QString nextFortune;
    in >> nextFortune;
//if nextfortune is the same as currentFortune,sets timer to 0, which signals for requestNewFortune slot
    if (nextFortune == currentFortune) {
        QTimer::singleShot(0, this, &Client::requestNewFortune);
        return;
    }
    //sets new label to the nextFortune
    currentFortune = nextFortune;
    statusLabel->setText(currentFortune);
    getFortuneButton->setEnabled(true);
}
void Client::displayError(QAbstractSocket::SocketError socketError)
{//if error signal, plays this
    //describes what to do for each type of error
    switch (socketError) {//if socketerror happened runs case
    case QAbstractSocket::RemoteHostClosedError:
        break;
    case QAbstractSocket::HostNotFoundError:
        QMessageBox::information(this, tr("Fortune Client"),
                                 tr("The host was not found. Please check the "
                                    "host name and port settings."));
        break;
    case QAbstractSocket::ConnectionRefusedError:
        QMessageBox::information(this, tr("Fortune Client"),
                                 tr("The connection was refused by the peer. "
                                    "Make sure the fortune server is running, "
                                    "and check that the host name and port "
                                    "settings are correct."));
        break;
    default:
        QMessageBox::information(this, tr("Fortune Client"),
                                 tr("The following error occurred: %1.")
                                 .arg(tcpSocket->errorString()));
    }
    //Once error is sorted out, FortuneButton enabled
    getFortuneButton->setEnabled(true);
}
//!THIS WORKS JUST UI IS FUCKED CUZ I FORGOT TO MAKE IT FORMLESS.STILL USE THIS AS REFERENCE FOR FUTURE
void Client::enableGetFortuneButton()
{//when QLineEdit's text change signal, enables the Fortune if the conditions are met
    getFortuneButton->setEnabled((!networkSession || networkSession->isOpen()) &&
                                 !hostCombo->currentText().isEmpty() &&
                                 !portLineEdit->text().isEmpty());

}
void Client::sessionOpened()
{
    // Save the used configuration
    QNetworkConfiguration config = networkSession->configuration();
    QString id;
    if (config.type() == QNetworkConfiguration::UserChoice)
        id = networkSession->sessionProperty(QLatin1String("UserChoiceConfiguration")).toString();
    else//else just copies config to id
        id = config.identifier();

    QSettings settings(QSettings::UserScope, QLatin1String("QtProject"));
    settings.beginGroup(QLatin1String("QtNetwork"));
    settings.setValue(QLatin1String("DefaultNetworkConfiguration"), id);
    settings.endGroup();
//Then tells client what's up in label. At initialization
    statusLabel->setText(tr("This examples requires that you run the "
                            "Fortune Server example as well."));
//Goes through slot in case params are met
    enableGetFortuneButton();

}
Client::~Client()
{
    delete ui;
}
