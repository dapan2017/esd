#include <QCoreApplication>
#include <QDateTime> // 日期时间类
#include <QDebug> // 调试输出

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    // 序列化
    QDateTime dateTime = QDateTime::currentDateTime();
    qDebug() << dateTime.date().year() << dateTime.date().month() << dateTime.date().day();

    QString str = dateTime.toString("yyyy-MM-dd hh:mm:ss.zzz");
    qDebug() << str;

    // 反序列化
    str = "2024-07-26 18:00:00";
    dateTime = QDateTime::fromString(str, "yyyy-MM-dd HH:mm:ss");
    // 年月日

    // qDebug() </*< ;
    // qDebug() << ;*/
    // 时分秒
    qDebug() << dateTime.time().hour();
    qDebug() << dateTime.time().minute();
    qDebug() << dateTime.time().second();


    return a.exec();
}
