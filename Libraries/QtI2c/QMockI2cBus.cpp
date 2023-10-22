#include "QMockI2cBus.h"

QMockI2cBus::QMockI2cBus()
{
    const QI2cDeviceAddress mockStVl53l0xAdress = 42;

    m_mockByteByteData[mockStVl53l0xAdress][0xC0] = 0xEE;
    m_mockByteByteData[mockStVl53l0xAdress][0xC1] = 0xAA;
    m_mockByteByteData[mockStVl53l0xAdress][0xC2] = 0x10;
}

QI2cByteData QMockI2cBus::readByte(const QI2cDeviceAddress &deviceAddress,
                                   const QI2cByteAddress &dataAddress)
{
    if (m_mockByteByteData.contains(deviceAddress) &&
        m_mockByteByteData[deviceAddress].contains(dataAddress))
    {
        return m_mockByteByteData[deviceAddress][dataAddress];
    }

    return 0;
}

QI2cByteData QMockI2cBus::readByte(const QI2cDeviceAddress &deviceAddress, const QI2cWordAddress &dataAddress)
{
    if (m_mockWordByteData.contains(deviceAddress) &&
        m_mockWordByteData[deviceAddress].contains(dataAddress))
    {
        return m_mockWordByteData[deviceAddress][dataAddress];
    }

    return 0;
}
