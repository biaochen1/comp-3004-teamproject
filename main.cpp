#include "mainwindow.h"
#include "settingwindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    SettingWindow s;


    w.show();
//    s.show();
    return a.exec();
}
