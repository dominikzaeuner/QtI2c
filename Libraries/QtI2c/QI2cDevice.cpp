#include "QI2cDevice.h"

QI2cDevice::QI2cDevice(std::shared_ptr<QI2cBus> &i2cBus) :
    m_i2cBus(i2cBus)
{
}
