#-------------------------------------------------
#
# Project created by QtCreator 2015-01-30T12:26:14
#
#-------------------------------------------------

QT        += core gui
QT        += sql


greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = phones
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    form_auth.cpp \
    option.cpp \
    dialog_abb_info.cpp \
    dialog_add_ab.cpp

HEADERS  += mainwindow.h \
    form_auth.h \
    option.h \
    dialog_abb_info.h \
    dialog_add_ab.h

FORMS    += mainwindow.ui \
    form_auth.ui \
    option.ui \
    dialog_abb_info.ui \
    dialog_add_ab.ui

RESOURCES += \
    res.qrc

OTHER_FILES += \
    myapp.rc

