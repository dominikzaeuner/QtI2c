#ifndef QMOCKI2CBUS_H
#define QMOCKI2CBUS_H

#include "QI2cBus.h"

#include <QMap>

class QMockI2cBus : public QI2cBus
{
public:
    QMockI2cBus();
    explicit QMockI2cBus(QMockI2cBus &&) = default;

    ~QMockI2cBus() override = default;

    QI2cByteData readByte(const QI2cDeviceAddress &deviceAddress,
                          const QI2cByteAddress &dataAddress) override;
    QI2cByteData readByte(const QI2cDeviceAddress &deviceAddress,
                          const QI2cWordAddress &dataAddress) override;

    QMockI2cBus &operator=(QMockI2cBus &&) = default;

protected:
    QMockI2cBus(const QMockI2cBus &) = default;

    QMockI2cBus &operator=(const QMockI2cBus &) = default;

private:
    QMap<QI2cDeviceAddress, QMap<QI2cByteAddress, QI2cByteData>> m_mockByteByteData;
    QMap<QI2cDeviceAddress, QMap<QI2cWordAddress, QI2cByteData>> m_mockWordByteData;
};

#endif // QMOCKI2CBUS_H
