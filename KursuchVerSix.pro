QT       += core gui network

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    addinganad.cpp \
    authorization.cpp \
    chat.cpp \
    connector.cpp \
    loginedit.cpp \
    main.cpp \
    mainmenu.cpp \
    passwordedit.cpp

HEADERS += \
    addinganad.h \
    authorization.h \
    chat.h \
    connector.h \
    loginedit.h \
    mainmenu.h \
    passwordedit.h

FORMS += \
    addinganad.ui \
    authorization.ui \
    chat.ui \
    loginedit.ui \
    mainmenu.ui \
    passwordedit.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    qrc.qrc
