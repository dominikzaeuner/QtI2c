#include "QStVl53l0x.h"

QStVl53l0x::QStVl53l0x(std::shared_ptr<QI2cBus> &i2cBus) :
    QI2cTofSensor(i2cBus)
{
}
