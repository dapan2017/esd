#include <QHostInfo>
#include <QMetaEnum>

#include "tcpclientwindow.h"
#include "ui_tcpclientwindow.h"

TcpClientWindow::TcpClientWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::TcpClientWindow)
    , m_labConnectionState(new QLabel("连接状态：断开"))
    , m_labSocketState(new QLabel(" 套接字状态："))
    , m_labSocketError(new QLabel(" 套接字错误："))
    , m_socket(new QTcpSocket(this))
{
    ui->setupUi(this);

    m_labConnectionState->setMinimumWidth(196);
    ui->statusbar->addWidget(m_labConnectionState);
    m_labSocketState->setMinimumWidth(197);
    ui->statusbar->addWidget(m_labSocketState);
    m_labSocketError->setMinimumWidth(197);
    ui->statusbar->addWidget(m_labSocketError);

    connect(m_socket, SIGNAL(connected()),
        this, SLOT(on_m_socket_connected()));
    connect(m_socket, SIGNAL(readyRead()),
        this, SLOT(on_m_socket_readyRead()));
    connect(m_socket, SIGNAL(disconnected()),
        this, SLOT(on_m_socket_disconnected()));

    connect(m_socket, SIGNAL(stateChanged(
        QAbstractSocket::SocketState)),
        this, SLOT(on_m_socket_stateChanged(
        QAbstractSocket::SocketState)));
    connect(m_socket, SIGNAL(error(
        QAbstractSocket::SocketError)),
        this, SLOT(on_m_socket_error(
        QAbstractSocket::SocketError)));
}

TcpClientWindow::~TcpClientWindow()
{
    delete ui;
}

void TcpClientWindow::on_m_actConnect_triggered()
{
    m_socket->connectToHost(
        ui->m_editRemoteAddr->text(),
        ui->m_editRemotePort->text().toUShort());
}

void TcpClientWindow::on_m_actDisconnect_triggered()
{
    m_socket->disconnectFromHost();
}

void TcpClientWindow::on_m_actClear_triggered()
{
    ui->m_editOutput->clear();
}

void TcpClientWindow::on_m_btnSend_clicked()
{
    QByteArray data ((ui->m_editSend->text() + "\n").toUtf8());

    //发送数据data给服务器,返回实际发送的字节数
    qint64 nbytes = m_socket->write(data);

    if (nbytes == -1)
        ui->m_editOutput->appendPlainText("发送失败");
    else
        ui->m_editOutput->appendPlainText(
            QString("向%1:%2发送%3字节：%4").
            arg(m_socket->peerAddress().toString()).
            arg(m_socket->peerPort()).
            arg(nbytes).
            arg(QString(data)).trimmed());
}

// 连接已建立
void TcpClientWindow::on_m_socket_connected()
{
    ui->m_editOutput->appendPlainText(
        QString("建立%1:%2连接").
        arg(m_socket->peerAddress().toString()).
        arg(m_socket->peerPort()));
    m_labConnectionState->setText(
        QString("连接状态：%1:%2").
        arg(m_socket->peerAddress().toString()).
        arg(m_socket->peerPort()));

    ui->m_btnSend->setEnabled(true);
}

// 读就绪
void TcpClientWindow::on_m_socket_readyRead()
{
    while (m_socket->canReadLine())
    {
        QByteArray data = m_socket->readLine();

        ui->m_editOutput->appendPlainText(
            QString("从%1:%2接收%3字节：%4").
            arg(m_socket->peerAddress().toString()).
            arg(m_socket->peerPort()).
            arg(data.size()).
            arg(QString(data)).trimmed());
    }
}

// 连接已断开
void TcpClientWindow::on_m_socket_disconnected()
{
    ui->m_btnSend->setEnabled(false);

    ui->m_editOutput->appendPlainText(
        QString("断开%1:%2连接").
        arg(m_socket->peerAddress().toString()).
        arg(m_socket->peerPort()));
    m_labConnectionState->setText("连接状态：断开");
}

// 套接字状态改变
void TcpClientWindow::on_m_socket_stateChanged(
    QAbstractSocket::SocketState socketState)
{
    m_labSocketState->setText(QString(" 套接字状态：%1").
        arg(QMetaEnum::fromType<QAbstractSocket::SocketState>().
            valueToKey(socketState)));
}

// 套接字出错
void TcpClientWindow::on_m_socket_error(
    QAbstractSocket::SocketError socketError)
{
    m_labSocketError->setText(QString(" 套接字错误：%1").
        arg(QMetaEnum::fromType<QAbstractSocket::SocketError>().
            valueToKey(socketError)));
}
