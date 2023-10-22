#ifndef QI2CDEVICE_H
#define QI2CDEVICE_H

#include <memory>

class QI2cBus;

class QI2cDevice
{
public:
    QI2cDevice(std::shared_ptr<QI2cBus> &i2cBus);

private:
    std::shared_ptr<QI2cBus> m_i2cBus;
};

#endif // QI2CDEVICE_H
