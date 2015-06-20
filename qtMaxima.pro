#-------------------------------------------------
#
# Project created by QtCreator 2015-04-11T18:21:25
#
#-------------------------------------------------

QT       += core gui webkitwidgets

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = qtmaxima
TEMPLATE = app
QMAKE_CXXFLAGS += -std=gnu++1y


SOURCES += src/main.cpp\
    src/qtmaximabackend.cpp \
    src/qtmaximasimplefrontend.cpp \
    src/qtmaxima.cpp \
    src/qtmaximaoutputwidget.cpp \
    src/qtmaximastaticintegrateanddiffinterface.cpp

HEADERS  += \
    src/qtmaximabackend.h \
    src/qtmaximasimplefrontend.h \
    src/qtmaxima.h \
    src/qtmaximaoutputwidget.h \
    src/qtmaximastaticintegrateanddiffinterface.h \
    src/qtmaximafrontend.h

OTHER_FILES += \
    src/qtmaximaoutputwidget.html

FORMS += \
    src/qtmaximastaticintegrateanddiffinterface.ui
