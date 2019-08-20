#-------------------------------------------------
#
# Project created by QtCreator 2019-08-09T14:35:08
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = TareaExtraclase1Cliente
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which has been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

CONFIG += c++11

SOURCES += \
        bst.cpp \
        deserealizador.cpp \
        linkedlist.cpp \
        main.cpp \
        mainwindow.cpp \
        popupwindow.cpp \
        popupwindow2.cpp \
        popupwindow3.cpp \
        popupwindow4.cpp \
        popupwindowbst1.cpp \
        popupwindowbts2.cpp \
        sockets.cpp

HEADERS += \
        bst.h \
        deserealizador.h \
        linkedlist.h \
        mainwindow.h \
        popupwindow.h \
        popupwindow2.h \
        popupwindow3.h \
        popupwindow4.h \
        popupwindowbst1.h \
        popupwindowbts2.h \
        sockets.h

FORMS += \
        bst.ui \
        linkedlist.ui \
        mainwindow.ui \
        popupwindow.ui \
        popupwindow2.ui \
        popupwindow3.ui \
        popupwindow4.ui \
        popupwindowbst1.ui \
        popupwindowbts2.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
