#ifndef I2CTOFDISTANCEWINDOW_H
#define I2CTOFDISTANCEWINDOW_H

#include <QWidget>

#include <memory>

class QI2cBus;

namespace Ui {
    class I2cTofDistanceWindow;
} // namespace Ui

class I2cTofDistanceWindow final : public QWidget
{
    // NOLINTNEXTLINE
    Q_OBJECT

public:
    explicit I2cTofDistanceWindow(QWidget *parent = nullptr);
    ~I2cTofDistanceWindow() final;

private:
    Q_DISABLE_COPY(I2cTofDistanceWindow)
    Q_DISABLE_MOVE(I2cTofDistanceWindow)
    std::unique_ptr<Ui::I2cTofDistanceWindow> m_ui;

    std::unique_ptr<QI2cBus> m_i2cBus;
};

#endif // I2CTOFDISTANCEWINDOW_H
