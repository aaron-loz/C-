#-------------------------------------------------
#
# Project created by QtCreator 2016-06-03T12:51:37
#
#-------------------------------------------------

QT       += core gui
QT       += network widgets

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = practiceServer
TEMPLATE = app


SOURCES += main.cpp\
        server.cpp

HEADERS  += server.h

# install
target.path = $$[QT_INSTALL_EXAMPLES]/network/fortuneserver
INSTALLS += target
