#include "mainwindow.h"
#include "widgets.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    widgets w;
    w.show();
    return a.exec();
}
