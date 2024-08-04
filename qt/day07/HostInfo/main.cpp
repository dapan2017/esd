#include <iostream>
using namespace std;

#include <QCoreApplication>
#include <QHostInfo>
#include <QMetaEnum>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    QString hostName = QHostInfo::localHostName();
    cout << hostName.toStdString() << endl;

    /*
        1.fromName -  获取对应主机名的各种信息
        2.fromName(hostName).addresses()
            本地主机所有的IP地址
        3.定义变量address 来遍历所有的IP地址
        4.QMetaEnum::fromType<QAbstractSocket::NetworkLayerProtocol>().
                valueToKey(address.protocol())
             address.protocol() - 返回该IP地址使用的网络层协议
             QMetaEnum::fromType<QAbstractSocket::NetworkLayerProtocol>
                获取QAbstractSocket::NetworkLayerProtocol类型的元对象


    */
    for (QHostAddress address :
        QHostInfo::fromName(hostName).addresses())
        cout << QMetaEnum::fromType<
            QAbstractSocket::NetworkLayerProtocol>().valueToKey(address.protocol()) << ", " <<
            address.toString().toStdString() << endl;

    return a.exec();
}
