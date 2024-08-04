#include "udpwindow.h"
#include "ui_udpwindow.h"

#include <QHostInfo>
#include <QMetaEnum>

UdpWindow::UdpWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::UdpWindow)
    , m_labSocketState(new QLabel("套接字状态: "))
    , m_labSocketError(new QLabel("套接字错误: "))
    , m_socket(new QUdpSocket(this))
{
    ui->setupUi(this);

    //1.将本地所有IP地址放到组合框中
    for(QHostAddress address: QHostInfo::fromName(
            QHostInfo::localHostName()).addresses())
    {
        if(address.protocol() == QAbstractSocket::IPv4Protocol)
            ui->m_comboLocalAddr->addItem(address.toString());
    }

    //2.将套接字状态/错误放到状态栏中
    m_labSocketState->setMinimumWidth(300);
    ui->statusbar->addWidget(m_labSocketState);
    m_labSocketError->setMinimumWidth(300);
    ui->statusbar->addWidget(m_labSocketError);

    //3.建立信号和槽的连接
    connect(m_socket, SIGNAL(readyRead()),
            this, SLOT(on_m_socket_readyRead()));

    connect(m_socket, SIGNAL(stateChanged(QAbstractSocket::SocketState)),
            this, SLOT(on_m_socket_stateChanged(QAbstractSocket::SocketState)));

    connect(m_socket, SIGNAL(error(QAbstractSocket::SocketError)),
            this, SLOT(on_m_socket_error(QAbstractSocket::SocketError)));

}

UdpWindow::~UdpWindow()
{
    delete ui;
}

//绑定
//socket绑定 - IP地址, 端口号
void UdpWindow::on_m_actBind_triggered()
{
    QHostAddress address(ui->m_comboLocalAddr->currentText());
    quint16 port = ui->m_editLocalPort->text().toUShort();


    if(m_socket->bind(address, port))
    {
        ui->m_editOutput->appendPlainText(
                    QString("绑定%1:%2成功").
                    arg(address.toString()).arg(port));
    }
    else
    {
        ui->m_editOutput->appendPlainText(
                    QString("绑定%1:%2失败").
                    arg(address.toString()).arg(port));
    }
}

//取消绑定
void UdpWindow::on_m_actAbort_triggered()
{
    m_socket->abort();

    ui->m_editOutput->appendPlainText("解除绑定");
}

void UdpWindow::on_m_actClear_triggered()
{
    ui->m_editOutput->clear();
}


void UdpWindow::on_m_btnSend_clicked()
{
    //1.构造数据报
    QByteArray datagram(ui->m_editSend->text().toUtf8());
    //2.构建对方的IP地址
    QHostAddress address(ui->m_editRemoteAddr->text());
    //3.构建对方的端口号
    quint16 port = ui->m_editRemotePort->text().toUShort();

    qint64 nbytes = m_socket->writeDatagram(datagram, address, port);

    if(-1 == nbytes)
        ui->m_editOutput->appendPlainText("发送失败");
    else
        ui->m_editOutput->appendPlainText(
              QString("向%1:%2发送%3字节:%4").
              arg(address.toString()).arg(port).arg(nbytes).arg(QString(datagram)));

}
//处理读就绪信号的槽函数
void UdpWindow::on_m_socket_readyRead()
{
    while(m_socket->hasPendingDatagrams())
    {
        //提供存储区 大于为 pending数据的个数个字节, 数据都为0
        //m_socket->pendingDatagramSize() - 要读取数据的字节个数是n个
        //提供n个字节的存储区来存储读取的数据, 全部将其初始化为0
        QByteArray datagram(m_socket->pendingDatagramSize(), 0);
        QHostAddress address;
        quint16 port;

        //datagram.data() - 数据存储区首地址
        //datagram.size() - 期望读取多少字节
        //address/port - 存储对方的IP地址和端口号
        //返回实际读取的字节数; 失败,返回-1
        qint64 nbytes = m_socket->readDatagram(
                    datagram.data(), datagram.size(), &address, &port);
        if(nbytes == -1)
            ui->m_editOutput->appendPlainText("接收失败");
        else
            ui->m_editOutput->appendPlainText(
                        QString("从%1:%2接收了%3字节:%4").
                        arg(QHostAddress(address.toIPv4Address()).toString()).
                        arg(port).arg(nbytes).arg(QString(datagram)));
    }
}
//error槽函数
void UdpWindow::on_m_socket_error(QAbstractSocket::SocketError socketError)
{

    m_labSocketError->setText(QString("套接字错误:%1").arg(
                                  QMetaEnum::fromType<QAbstractSocket::SocketError>().
                                  valueToKey(socketError)));
}
//stateChanged槽函数
void UdpWindow::on_m_socket_stateChanged(QAbstractSocket::SocketState socketState)
{

    m_labSocketState->setText(QString("套接字状态:%1").arg(
                                  QMetaEnum::fromType<QAbstractSocket::SocketState>().
                                  valueToKey(socketState)));
}

