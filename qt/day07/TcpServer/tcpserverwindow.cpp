#include <QHostInfo>
#include <QMetaEnum>

#include "tcpserverwindow.h"
#include "ui_tcpserverwindow.h"

TcpServerWindow::TcpServerWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::TcpServerWindow)
    , m_labListenState(new QLabel("监听状态：关闭"))
    , m_labSocketState(new QLabel(" 套接字状态："))
    , m_labSocketError(new QLabel(" 套接字错误："))
    , m_server(new QTcpServer(this))
{
    ui->setupUi(this);

    for (QHostAddress address : QHostInfo::fromName(
        QHostInfo::localHostName()).addresses())
        if (address.protocol() == QAbstractSocket::IPv4Protocol)
            ui->m_comboLoalAddr->addItem(address.toString());

    m_labListenState->setMinimumWidth(196);
    ui->statusbar->addWidget(m_labListenState);
    m_labSocketState->setMinimumWidth(197);
    ui->statusbar->addWidget(m_labSocketState);
    m_labSocketError->setMinimumWidth(197);
    ui->statusbar->addWidget(m_labSocketError);

    //有新的连接到来 - 触发
    //newConnection信号 - 槽函数
    connect(m_server, SIGNAL(newConnection()),
        this, SLOT(on_m_server_newConnection()));
}

TcpServerWindow::~TcpServerWindow()
{
    delete ui;
}

void TcpServerWindow::on_m_actListen_triggered()
{
    QHostAddress address(ui->m_comboLoalAddr->currentText());
    quint16 port = ui->m_editLocalPort->text().toUShort();

    if (m_server->listen(address, port))
    {
        ui->m_editOutput->appendPlainText(
            QString("监听%1:%2成功").
            arg(address.toString()).arg(port));
        m_labListenState->setText(
            QString("监听状态：%1:%2").
            arg(address.toString()).arg(port));
    }
    else
        ui->m_editOutput->appendPlainText(
            QString("监听%1:%2失败").
            arg(address.toString()).arg(port));
}

void TcpServerWindow::on_m_actClose_triggered()
{
    m_server->close();//关闭监听

    ui->m_editOutput->appendPlainText("关闭监听");
    m_labListenState->setText("监听状态：关闭");
}

void TcpServerWindow::on_m_actClear_triggered()
{
    ui->m_editOutput->clear();
}

void TcpServerWindow::on_m_btnSend_clicked()
{
    broadcast((ui->m_editSend->text() + "\n").toUtf8());
}

// 新连接已建立
//|客户端|-----------------|服务器(TcpServer)|
//tcpsocket ----------------- socket
//m_sockets:
//  |1|2|3|4|5|6|
void TcpServerWindow::on_m_server_newConnection()
{
    QTcpSocket* socket = m_server->nextPendingConnection();

    connect(socket, SIGNAL(readyRead()),
        this, SLOT(on_m_socket_readyRead()));
    connect(socket, SIGNAL(disconnected()),
        this, SLOT(on_m_socket_disconnected()));

    connect(socket, SIGNAL(stateChanged(
        QAbstractSocket::SocketState)),
        this, SLOT(on_m_socket_stateChanged(
        QAbstractSocket::SocketState)));
    connect(socket, SIGNAL(error(
        QAbstractSocket::SocketError)),
        this, SLOT(on_m_socket_error(
        QAbstractSocket::SocketError)));

    ui->m_editOutput->appendPlainText(
        QString("接受%1:%2连接").
        arg(socket->peerAddress().toString()).
        arg(socket->peerPort()));

    m_sockets.push_back(socket);
    ui->m_btnSend->setEnabled(true);
}

// 读就绪
void TcpServerWindow::on_m_socket_readyRead()
{
    //sender()返回发送信号的对象指针 - 返回了客户端的socket
    QTcpSocket* socket = (QTcpSocket*)sender();

    while (socket->canReadLine())
    {
        QByteArray data = socket->readLine();

        ui->m_editOutput->appendPlainText(
            QString("从%1:%2接收%3字节：%4").
            arg(socket->peerAddress().toString()).
            arg(socket->peerPort()).
            arg(data.size()).
            arg(QString(data)).trimmed());

        broadcast(data);
    }
}

// 连接已断开
void TcpServerWindow::on_m_socket_disconnected()
{
    QTcpSocket* socket = (QTcpSocket*)sender();

    //从m_sockets移除当前客户端的socket
    m_sockets.removeOne(socket);
    ui->m_btnSend->setEnabled(!m_sockets.isEmpty());

    ui->m_editOutput->appendPlainText(
        QString("断开%1:%2连接").
        arg(socket->peerAddress().toString()).
        arg(socket->peerPort()));

    socket->deleteLater();
}

// 套接字状态改变
void TcpServerWindow::on_m_socket_stateChanged(
    QAbstractSocket::SocketState socketState)
{
    m_labSocketState->setText(QString(" 套接字状态：%1").
        arg(QMetaEnum::fromType<QAbstractSocket::SocketState>().
            valueToKey(socketState)));
}

// 套接字出错
void TcpServerWindow::on_m_socket_error(
    QAbstractSocket::SocketError socketError)
{
    m_labSocketError->setText(QString(" 套接字错误：%1").
        arg(QMetaEnum::fromType<QAbstractSocket::SocketError>().
            valueToKey(socketError)));
}

// 向所有在线客户机广播
//m_sockets:
//  |1|2|3|4|5|6|
void TcpServerWindow::broadcast(QByteArray const& data)
{
    //遍历了m_sockets中每个QTcpSocket对象 - 将其赋值给我socket
    for (QTcpSocket* socket : m_sockets)
    {
        //将数据 发送给对应的客户端
        qint64 nbytes = socket->write(data);

        if (nbytes == -1)
            ui->m_editOutput->appendPlainText("发送失败");
        else
            ui->m_editOutput->appendPlainText(
                QString("向%1:%2发送%3字节：%4").
                arg(socket->peerAddress().toString()).
                arg(socket->peerPort()).
                arg(nbytes).
                arg(QString(data).trimmed()));
    }
}
