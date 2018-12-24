#ifndef SERVER_H
#define SERVER_H

#include <QMainWindow>
#include <QDialog>

QT_BEGIN_NAMESPACE
class QLabel;
class QPushButton;
class QTcpServer;
class QNetworkSession;
QT_END_NAMESPACE
class server : public QDialog
{
    Q_OBJECT

public:
    server(QWidget *parent = 0);
    ~server();
private slots:
    void sessionOpened();
    void sendFortune();

private:
    QLabel *statusLabel;
    QTcpServer *tcpServer;
    QStringList fortunes;
    QNetworkSession *networkSession;
//remember, you must add QT += network widgets
};

#endif // SERVER_H
