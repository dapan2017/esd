#include "shapedialog.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    ShapeDialog w;
    w.show();
    return a.exec();
}
