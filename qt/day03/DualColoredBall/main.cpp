#include "dualcoloredballdialog.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    DualColoredBallDialog w;
    w.show();
    return a.exec();
}
