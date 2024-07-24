#include "contexdialog.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    ContexDialog w;
    w.show();
    return a.exec();
}
