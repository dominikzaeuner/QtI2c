#ifndef QI2CBUS_H
#define QI2CBUS_H

#include "QI2cAddress.h"
#include "QI2cData.h"
#include "QI2cDeviceAddress.h"

class QI2cBus
{
public:
    explicit QI2cBus(QI2cBus &&) = default;

    virtual ~QI2cBus() = default;

    virtual QI2cByteData readByte(const QI2cDeviceAddress &deviceAddress,
                                  const QI2cByteAddress &dataAddress) = 0;
    virtual QI2cByteData readByte(const QI2cDeviceAddress &deviceAddress,
                                  const QI2cWordAddress &dataAddress) = 0;

    QI2cBus &operator=(QI2cBus &&) = default;

protected:
    QI2cBus() = default;
    QI2cBus(const QI2cBus &) = default;

    QI2cBus &operator=(const QI2cBus &) = default;
};

#endif // QI2CBUS_H


