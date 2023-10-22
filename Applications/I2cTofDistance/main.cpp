#include "I2cTofDistanceWindow.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    I2cTofDistanceWindow w;
    w.show();

    return app.exec();
}
