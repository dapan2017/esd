#include "reboundedballdialog.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    ReboundedBallDialog w;
    w.show();
    return a.exec();
}
