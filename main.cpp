#include "mainwindow.h"

#include <QApplication>
#include <QLabel>

int main(int argc, char *argv[])
{
    QApplication win(argc, argv);
    MainWindow w;
    w.show();
    return win.exec();
}
