#include "server.h"
#include <QApplication>
#include <QtCore>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    server w;
    w.show();

    return a.exec();
}
