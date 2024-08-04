#include "udpwindow.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    UdpWindow w;
    w.show();
    return a.exec();
}
