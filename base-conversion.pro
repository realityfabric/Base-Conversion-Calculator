QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = base-conversion
TEMPLATE = app


SOURCES += main.cpp\
        dialog.cpp \
    converter.cpp

HEADERS  += dialog.h \
    converter.h

FORMS    += dialog.ui
