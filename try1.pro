QT       += core gui
QT       += multimedia
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    chatdialog.cpp \
    cosmetic.cpp \
    criticism.cpp \
    dialog.cpp \
    enterdialog.cpp \
    main.cpp \
    mainwindow.cpp \
    page.cpp \
    treehole.cpp \
    volleyballgame.cpp \
    wechat.cpp

HEADERS += \
    chatdialog.h \
    cosmetic.h \
    criticism.h \
    dialog.h \
    enterdialog.h \
    mainwindow.h \
    page.h \
    treehole.h \
    volleyballgame.h \
    wechat.h

FORMS += \
    chatdialog.ui \
    cosmetic.ui \
    criticism.ui \
    dialog.ui \
    enterdialog.ui \
    mainwindow.ui \
    page.ui \
    treehole.ui \
    volleyballgame.ui \
    wechat.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    resource.qrc


