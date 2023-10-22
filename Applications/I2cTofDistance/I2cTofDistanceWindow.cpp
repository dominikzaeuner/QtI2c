#include "I2cTofDistanceWindow.h"

#include "ui_I2cTofDistanceWindow.h"

I2cTofDistanceWindow::I2cTofDistanceWindow(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::I2cTofDistanceWindow)
{
    ui->setupUi(this);
}

I2cTofDistanceWindow::~I2cTofDistanceWindow()
{
    delete ui;
}
