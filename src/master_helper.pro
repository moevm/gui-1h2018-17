#-------------------------------------------------
#
# Project created by QtCreator 2018-03-09T14:04:27
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = master_helper
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    confirm_del.cpp \
    editparametersform.cpp \
    combatbeginform.cpp \
    combatform.cpp \
    model.cpp \
    editeffectsform.cpp \
    player.cpp \
    param_list.cpp \
    parameter.cpp \
    effect.cpp \
    person.cpp \
    scene.cpp

HEADERS  += mainwindow.h \
    confirm_del.h \
    editparametersform.h \
    combatbeginform.h \
    combatform.h \
    model.h \
    editeffectsform.h \
    player.h \
    param_list.h \
    parameter.h \
    effect.h \
    person.h \
    scene.h

FORMS    += mainwindow.ui \
    confirm_del.ui \
    editparametersform.ui \
    combatbeginform.ui \
    combatform.ui \
    editeffectsform.ui
