#include "QI2cTofSensor.h"

QI2cTofSensor::QI2cTofSensor(std::shared_ptr<QI2cBus> &i2cBus) :
    QI2cDevice(i2cBus)
{
}
