QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    alien.cpp \
    balas.cpp \
    enemy1.cpp \
    escolta.cpp \
    heroe.cpp \
    main.cpp \
    mainwindow.cpp \
    morty.cpp \
    obstaculo.cpp \
    rick.cpp \
    start.cpp

HEADERS += \
    alien.h \
    balas.h \
    enemy1.h \
    escolta.h \
    heroe.h \
    mainwindow.h \
    morty.h \
    obstaculo.h \
    rick.h \
    start.h

FORMS += \
    mainwindow.ui \
    start.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

DISTFILES +=

RESOURCES += \
    imagenes.qrc
