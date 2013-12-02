#-------------------------------------------------
#
# Project created by QtCreator 2013-11-08T17:18:44
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = GrabStreamVideo
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    videostreamview.cpp \
    dialog_addcamera.cpp \
    mylistview.cpp \
    detectmotion.cpp \
    filemeneger.cpp

HEADERS  += mainwindow.h \
    videostreamview.h \
    dialog_addcamera.h \
    mylistview.h \
    detectmotion.h \
    filemeneger.h

FORMS    += mainwindow.ui \
    videostreamview.ui \
    dialog_addcamera.ui

INCLUDEPATH += "d:\\opencv\\build\\include"
LIBS += -l"d:\\opencv\\build\\x86\\vc11\\lib\\*"
