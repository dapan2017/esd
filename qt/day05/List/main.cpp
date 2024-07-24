#include "listwindow.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    ListWindow w;
    w.show();
    return a.exec();
}
