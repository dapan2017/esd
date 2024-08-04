#ifndef UDPWINDOW_H
#define UDPWINDOW_H

#include <QMainWindow>
#include <QLabel>
#include <QUdpSocket>


QT_BEGIN_NAMESPACE
namespace Ui { class UdpWindow; }
QT_END_NAMESPACE

class UdpWindow : public QMainWindow
{
    Q_OBJECT

public:
    UdpWindow(QWidget *parent = nullptr);
    ~UdpWindow();

private slots:
    void on_m_actBind_triggered();
    void on_m_actAbort_triggered();
    void on_m_actClear_triggered();

    void on_m_btnSend_clicked();//发送按钮槽函数

    //三个槽函数
    //readyRead槽函数
    void on_m_socket_readyRead();
    //error槽函数
    void on_m_socket_error(QAbstractSocket::SocketError socketError);
    //stateChanged槽函数
    void on_m_socket_stateChanged(QAbstractSocket::SocketState socketState);

private:
    Ui::UdpWindow *ui;
    QLabel* m_labSocketState;//显示套接字的状态
    QLabel* m_labSocketError;//显示套接字的错误
    QUdpSocket* m_socket;
};
#endif // UDPWINDOW_H
