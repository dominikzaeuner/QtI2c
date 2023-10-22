#ifndef QI2CDATA_H
#define QI2CDATA_H

template<class T>
class QI2cData
{
public:
    constexpr QI2cData() :
        m_value(0)
    {
    }

    constexpr QI2cData(const T &value) :
        m_value(value)
    {
    }

    constexpr const T &value() const
    {
        return m_value;
    }

    constexpr operator T() const
    {
        return m_value;
    }

private:
    T m_value;
};

template class QI2cData<unsigned char>;
using QI2cByteData = QI2cData<unsigned char>;

template class QI2cData<unsigned long>;
using QI2cWordData = QI2cData<unsigned long>;

#endif // QI2CDATA_H
