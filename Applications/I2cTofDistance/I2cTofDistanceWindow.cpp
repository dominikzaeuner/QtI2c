#include "I2cTofDistanceWindow.h"

#include "ui_I2cTofDistanceWindow.h"

#include "QMockI2cBus.h"

#include <QDebug>

I2cTofDistanceWindow::~I2cTofDistanceWindow() = default;

I2cTofDistanceWindow::I2cTofDistanceWindow(QWidget *parent) :
    QWidget(parent),
    m_ui(std::make_unique<Ui::I2cTofDistanceWindow>()),
    m_i2cBus(std::make_unique<QMockI2cBus>())
{
    m_ui->setupUi(this);

    qDebug() << Qt::hex << m_i2cBus->readByte(42, QI2cByteAddress(0xC0));
}
