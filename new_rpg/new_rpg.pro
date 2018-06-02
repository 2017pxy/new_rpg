#-------------------------------------------------
#
# Project created by QtCreator 2018-05-25T22:04:56
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = new_rpg
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which as been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0


SOURCES += \
        main.cpp \
        mainwindow.cpp \
    base.cpp \
    mapblock.cpp \
    icon.cpp \
    tree_pic.cpp \
    player.cpp \
    world.cpp \
    npc_1_1.cpp \
    house1.cpp \
    npc.cpp \
    mud.cpp \
    front_hill.cpp \
    npc_3_1.cpp \
    npc_3_2.cpp \
    npc_3_3.cpp \
    npc_3_4.cpp \
    npc_3_5.cpp \
    chest.cpp \
    portal.cpp \
    world_back.cpp \
    npc_2.cpp

HEADERS += \
        mainwindow.h \
    base.h \
    mapblock.h \
    icon.h \
    tree_pic.h \
    player.h \
    world.h \
    npc_1_1.h \
    house1.h \
    npc.h \
    mud.h \
    front_hill.h \
    npc_3_1.h \
    npc_3_2.h \
    npc_3_3.h \
    npc_3_4.h \
    npc_3_5.h \
    chest.h \
    portal.h \
    world_back.h \
    npc_2.h

FORMS += \
        mainwindow.ui
