#ifndef QI2CADDRESS_H
#define QI2CADDRESS_H

template<class T>
class QI2cAddress
{
public:
    constexpr QI2cAddress(const T &address) :
        m_address(address)
    {
    }

    constexpr const T &address() const
    {
        return m_address;
    }

    constexpr bool operator <(QI2cAddress other) const
    {
        return m_address < other.m_address;
    }

private:
    T m_address;
};

template class QI2cAddress<unsigned char>;
using QI2cByteAddress = QI2cAddress<unsigned char>;

template class QI2cAddress<unsigned long>;
using QI2cWordAddress = QI2cAddress<unsigned long>;

#endif // QI2CADDRESS_H
