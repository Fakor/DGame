#-------------------------------------------------
#
# Project created by QtCreator 2019-02-02T22:16:34
#
#-------------------------------------------------

QT       -= core gui

TARGET = static
TEMPLATE = lib
CONFIG += staticlib

QMAKE_CXXFLAGS += -std=c++17

# The following define makes your compiler emit warnings if you use
# any feature of Qt which has been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    Square.cpp \
    GridBoard.cpp \
    Attribute.cpp \
    position.cpp \
    Piece.cpp \
    moveup.cpp \
    MoveRight.cpp \
    MoveLeft.cpp \
    MoveDown.cpp

HEADERS += \
    Square.h \
    GridBoard.h \
    Attribute.h \
    position.h \
    Piece.h \
    moveup.h \
    Rule.h \
    MoveRight.h \
    MoveLeft.h \
    MoveDown.h
unix {
    target.path = /usr/lib
    INSTALLS += target
}
