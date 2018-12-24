#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMediaPlayer>


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    QMediaPlayer *player = new QMediaPlayer(this);
    /*
    QUrl url("D:/C++/Music/a.mp3");
    qDebug()<<url.fileName();
    player->setMedia(url);
    player->setVolume(50);
    player->play();
    qDebug()<<player->errorString();*/
}
