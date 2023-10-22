#ifndef QI2CDEVICEADDRESS_H
#define QI2CDEVICEADDRESS_H

class QI2cDeviceAddress
{
public:
    constexpr QI2cDeviceAddress(const unsigned char address) :
        m_address(address)
    {
    };

    constexpr unsigned char address() const
    {
        return m_address;
    }

    constexpr operator unsigned char() const
    {
        return m_address;
    }

    constexpr bool operator <(QI2cDeviceAddress other) const
    {
        return m_address < other.m_address;
    }

private:
    unsigned char m_address;
};

#endif // QI2CDEVICEADDRESS_H
