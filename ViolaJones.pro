#-------------------------------------------------
#
# Project created by QtCreator 2015-03-01T11:44:38
#
#-------------------------------------------------

QT       += core gui

TARGET = ViolaJones
TEMPLATE = app


SOURCES += main.cpp\
        visor.cpp

HEADERS  += visor.h

FORMS    += visor.ui

QT_CONFIG -= no-pkg-config
CONFIG += link_pkgconfig
PKGCONFIG += opencv
