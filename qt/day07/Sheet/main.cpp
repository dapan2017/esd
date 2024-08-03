#include "sheetwindow.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    SheetWindow w;
    w.show();
    return a.exec();
}
