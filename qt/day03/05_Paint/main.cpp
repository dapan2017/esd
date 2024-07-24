#include "paintdialog.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    PaintDialog w;
    w.show();
    return a.exec();
}
