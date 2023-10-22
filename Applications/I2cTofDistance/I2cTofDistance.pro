TEMPLATE = app

QT += \
      gui \

greaterThan(QT_MAJOR_VERSION, 4) {
    QT += \
          widgets \
}

SOURCES = \
          I2cTofDistanceWindow.cpp \
          main.cpp \

FORMS += \
    I2cTofDistanceWindow.ui

HEADERS += \
    I2cTofDistanceWindow.h

INCLUDEPATH += \
    $$PWD/../../Libraries/QtI2c

LIBS += -L$$OUT_PWD/../../Libraries/QtI2c -lqti2c

DEPENDPATH += $$PWD/../../../Libraries/QtI2c
PRE_TARGETDEPS += $$OUT_PWD/../../Libraries/QtI2c/libqti2c.so
