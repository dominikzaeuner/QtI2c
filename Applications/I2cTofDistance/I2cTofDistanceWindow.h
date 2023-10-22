#ifndef I2CTOFDISTANCEWINDOW_H
#define I2CTOFDISTANCEWINDOW_H

#include <QWidget>

namespace Ui {
class I2cTofDistanceWindow;
}

class I2cTofDistanceWindow : public QWidget
{
    Q_OBJECT

public:
    explicit I2cTofDistanceWindow(QWidget *parent = nullptr);
    ~I2cTofDistanceWindow();

private:
    Ui::I2cTofDistanceWindow *ui;
};

#endif // I2CTOFDISTANCEWINDOW_H
