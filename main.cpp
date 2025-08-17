#include "calculatecylinder.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    calculateCylinder c;
    c.show();
    return a.exec();
}
