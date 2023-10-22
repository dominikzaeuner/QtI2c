#ifndef QSTVL53L0X_H
#define QSTVL53L0X_H

#include "QI2cTofSensor.h"

class QStVl53l0x : public QI2cTofSensor
{
public:
    QStVl53l0x(std::shared_ptr<QI2cBus> &i2cBus);
};

#endif // QSTVL53L0X_H
