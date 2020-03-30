#include "denasimulator.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    DenaSimulator w;
    w.show();

    return a.exec();
}
