#include "pathdialog.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    PathDialog w;
    w.show();
    return a.exec();
}
