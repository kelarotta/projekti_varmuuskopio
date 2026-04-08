#include "mainwindow.h"
#include "pin.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    //MainWindow w;
    //w.show();
    PIN e;
    e.show();
    return a.exec();
}
