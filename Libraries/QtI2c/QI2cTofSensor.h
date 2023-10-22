#ifndef QI2CTOFSENSOR_H
#define QI2CTOFSENSOR_H

#include "QI2cDevice.h"

class QI2cTofSensor : public QI2cDevice
{
public:
    QI2cTofSensor(std::shared_ptr<QI2cBus> &i2cBus);
};

#endif // QI2CTOFSENSOR_H
