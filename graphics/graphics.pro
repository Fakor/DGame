#-------------------------------------------------
#
# Project created by QtCreator 2019-02-02T22:21:55
#
#-------------------------------------------------

QT       += core gui widgets

TARGET = graphics
TEMPLATE = lib
CONFIG += staticlib

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
    GridBoardGUI.cpp \
    SquareGUI.cpp

HEADERS += \
    GridBoardGUI.h \
    SquareGUI.h
unix {
    target.path = /usr/lib
    INSTALLS += target
}

win32:CONFIG(release, debug|release): LIBS += -L$$OUT_PWD/static/release/ -lstatic
else:win32:CONFIG(debug, debug|release): LIBS += -L$$OUT_PWD/static/debug/ -lstatic
else:unix: LIBS += -L$$OUT_PWD/static/ -lstatic

INCLUDEPATH += $$PWD/../static
DEPENDPATH += $$PWD/../static

win32-g++:CONFIG(release, debug|release): PRE_TARGETDEPS += $$OUT_PWD/static/release/libstatic.a
else:win32-g++:CONFIG(debug, debug|release): PRE_TARGETDEPS += $$OUT_PWD/static/debug/libstatic.a
else:win32:!win32-g++:CONFIG(release, debug|release): PRE_TARGETDEPS += $$OUT_PWD/static/release/static.lib
else:win32:!win32-g++:CONFIG(debug, debug|release): PRE_TARGETDEPS += $$OUT_PWD/static/debug/static.lib
else:unix: PRE_TARGETDEPS += $$OUT_PWD/../static/libstatic.a
