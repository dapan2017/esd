#ifndef TIMERDIALOG_H
#define TIMERDIALOG_H

#include <QDialog>
#include <QTimer> // 定时器
#include <QTime>  // 获取当前时间

QT_BEGIN_NAMESPACE
namespace Ui { class TimerDialog; }
QT_END_NAMESPACE

class TimerDialog : public QDialog
{
    Q_OBJECT

public:
    TimerDialog(QWidget *parent = nullptr);
    ~TimerDialog();

protected:
    // 定时器事件对应的函数
    void timerEvent(QTimerEvent*);

private slots:
    void on_m_btnStart_clicked();
    void on_m_btnReset_clicked();
    // timeout信号对象的槽函数
    void on_m_clock_timeout();

private:
    Ui::TimerDialog *ui;
    QTimer m_clock; // 定时器对象
    QTime m_elapsed; // 计时器对应的对象
    int m_elapsedTimer; // 定时器的ID
};
#endif // TIMERDIALOG_H
