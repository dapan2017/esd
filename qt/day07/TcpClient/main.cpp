#include "tcpclientwindow.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    TcpClientWindow w;
    w.show();
    return a.exec();
}
