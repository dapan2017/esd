#include "tcpserverwindow.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    TcpServerWindow w;
    w.show();
    return a.exec();
}
