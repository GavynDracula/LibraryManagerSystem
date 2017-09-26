#-------------------------------------------------
#
# Project created by QtCreator 2017-05-16T11:02:29
#
#-------------------------------------------------

QT       += core gui
QT       += sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = PublicationManagement
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    inputdialog.cpp \
    modifydialog.cpp \
    deletedialog.cpp \
    inquiredialog.cpp

HEADERS  += mainwindow.h \
    inputdialog.h \
    deletedialog.h \
    modifydialog.h \
    deletedialog.h \
    inquiredialog.h

FORMS    += mainwindow.ui \
    inputdialog.ui \
    modifydialog.ui \
    deletedialog.ui \
    inquiredialog.ui
