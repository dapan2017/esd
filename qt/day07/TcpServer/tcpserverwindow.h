#ifndef TCPSERVERWINDOW_H
#define TCPSERVERWINDOW_H

#include <QMainWindow>
#include <QLabel>
#include <QTcpServer>//创建tcp服务器
#include <QTcpSocket>//创建tcp套接字 - 用于通信
#include <QVector>

QT_BEGIN_NAMESPACE
namespace Ui { class TcpServerWindow; }
QT_END_NAMESPACE

class TcpServerWindow : public QMainWindow
{
    Q_OBJECT

public:
    TcpServerWindow(QWidget *parent = nullptr);
    ~TcpServerWindow();

private slots:
    void on_m_actListen_triggered();
    void on_m_actClose_triggered();
    void on_m_actClear_triggered();

    void on_m_btnSend_clicked();

    // 新连接已建立
    void on_m_server_newConnection();

    // 读就绪
    void on_m_socket_readyRead();
    // 连接已断开
    void on_m_socket_disconnected();

    // 套接字状态改变
    void on_m_socket_stateChanged(
        QAbstractSocket::SocketState socketState);
    // 套接字出错
    void on_m_socket_error(
        QAbstractSocket::SocketError socketError);

private:
    //服务器将消息发送给所有的已经连接的客户端
    void broadcast(QByteArray const& data);

    Ui::TcpServerWindow *ui;
    QLabel* m_labListenState;
    QLabel* m_labSocketState;
    QLabel* m_labSocketError;
    QTcpServer* m_server;//tcp服务器
    QVector<QTcpSocket*> m_sockets;
};
#endif // TCPSERVERWINDOW_H
