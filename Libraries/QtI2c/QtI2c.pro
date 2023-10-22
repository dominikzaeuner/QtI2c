TEMPLATE = lib

TARGET = qti2c

HEADERS += \
    QI2cAddress.h \
    QI2cBus.h \
    QI2cData.h \
    QI2cDevice.h \
    QI2cDeviceAddress.h \
    QI2cTofSensor.h \
    QMockI2cBus.h \
    QStVl53l0x.h

SOURCES += \
    QI2cBus.cpp \
    QI2cDevice.cpp \
    QI2cTofSensor.cpp \
    QMockI2cBus.cpp \
    QStVl53l0x.cpp
