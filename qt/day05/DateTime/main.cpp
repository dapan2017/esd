#include "datetimedialog.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    DateTimeDialog w;
    w.show();
    return a.exec();
}
