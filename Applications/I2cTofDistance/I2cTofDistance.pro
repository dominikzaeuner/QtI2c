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
