#ifndef TCPCLIENTWINDOW_H
#define TCPCLIENTWINDOW_H

#include <QMainWindow>
#include <QLabel>
#include <QTcpSocket>

QT_BEGIN_NAMESPACE
namespace Ui { class TcpClientWindow; }
QT_END_NAMESPACE

class TcpClientWindow : public QMainWindow
{
    Q_OBJECT

public:
    TcpClientWindow(QWidget *parent = nullptr);
    ~TcpClientWindow();

private slots:
    void on_m_actConnect_triggered();
    void on_m_actDisconnect_triggered();
    void on_m_actClear_triggered();

    void on_m_btnSend_clicked();

    // 连接已建立
    void on_m_socket_connected();
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
    Ui::TcpClientWindow *ui;
    QLabel* m_labConnectionState;
    QLabel* m_labSocketState;
    QLabel* m_labSocketError;
    QTcpSocket* m_socket;
};
#endif // TCPCLIENTWINDOW_H
