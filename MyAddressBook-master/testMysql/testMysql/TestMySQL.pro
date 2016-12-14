#QT += core
#QT -= gui

#CONFIG += c++11

#TARGET = TestMySQL
#CONFIG += console
#CONFIG -= app_bundle

#TEMPLATE = app
QT += widgets
#SOURCES += main.cpp

QT       += core sql
QT       -= gui
QT       += sql widgets
QT       += sql
TARGET = TestMySQL
CONFIG   += console
CONFIG   -= app_bundle

TEMPLATE = app

SOURCES += main.cpp \
    testmysql.cpp

HEADERS += \
    testmysql.h
