#include "picturesdialog.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    PicturesDialog w;
    w.show();
    return a.exec();
}
