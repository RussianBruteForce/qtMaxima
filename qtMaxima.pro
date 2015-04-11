#-------------------------------------------------
#
# Project created by QtCreator 2015-04-11T18:21:25
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = qtMaxima
TEMPLATE = app
CONFIG += c++11


SOURCES += src/main.cpp\
    src/qtmaximabackend.cpp \
    src/qtmaximasimplefrontend.cpp \
    src/qtmaxima.cpp

HEADERS  += \
    src/qtmaximabackend.h \
    src/qtmaximasimplefrontend.h \
    src/qtmaxima.h
