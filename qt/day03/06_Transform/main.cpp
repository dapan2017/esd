#include "transformdialog.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    TransformDialog w;
    w.show();
    return a.exec();
}
