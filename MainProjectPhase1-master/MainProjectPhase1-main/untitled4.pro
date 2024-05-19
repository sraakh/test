QT       += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    fifthpage.cpp \
    forthpage.cpp \
    main.cpp \
    mainwindow.cpp \
    secondpage.cpp \
    thirdpage.cpp

HEADERS += \
    fifthpage.h \
    forthpage.h \
    mainwindow.h \
    secondpage.h \
    thirdpage.h

FORMS += \
    fifthpage.ui \
    forthpage.ui \
    mainwindow.ui \
    secondpage.ui \
    thirdpage.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    again.qrc \
    capcha2.qrc \
    captchs.qrc \
    imag.qrc \
    image2.qrc \
    image3.qrc \
    image4.qrc \
    photo5.qrc \
    photo6.qrc
