#include "timerdialog.h"
#include "ui_timerdialog.h"

/*
    定时器信号 :
        1.定时器对象
        2.m_clock->start(1000);
            每1000ms触发定时器信号timeout
        3.槽函数 - 显示当前时间
*/
TimerDialog::TimerDialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::TimerDialog)
{
    ui->setupUi(this);

    // 获取当前时间显示
    on_m_clock_timeout();
    // 调用复位函数
    on_m_btnReset_clicked();
    // 建立信号和槽的连接
    // 一旦触发timeout信号 - 调用对应槽函数
    connect(&m_clock, SIGNAL(timeout()),
            this, SLOT(on_m_clock_timeout()));
    // 启动定时器 - 后续每1000ms触发一次timeout信号
    m_clock.start(1000);
}

TimerDialog::~TimerDialog()
{
    delete ui;
}

// timeout信号对象的槽函数
// 1.获取当前时间
// 2.解析出 时分秒 - 转换为字符串
// 3.时间放到模块中
void TimerDialog::on_m_clock_timeout()
{
    // 返回当前时间
    QTime now = QTime::currentTime();

    ui->m_lcdHour->display( QString::number(now.hour()));
    ui->m_lcdMinute->display( QString::number(now.minute()));
    ui->m_lcdSecond->display( QString::number(now.second()));
}

// 定时器事件对应的处理函数
// 00:01:43.247 - 当前的QTime的值
// 如何让m_elapsed的值在1ms后自动加1
void TimerDialog::timerEvent(QTimerEvent*)
{
    // 添加了1ms, 赋值给其自身
    m_elapsed = m_elapsed.addMSecs(1);
    ui->m_lcdElapsed->display(
                 m_elapsed.toString("HH:mm:ss.zzz"));
}

// 开始按钮槽函数
void TimerDialog::on_m_btnStart_clicked()
{
    if(ui->m_btnStart->text() == "开始"){
        // 启动定时器, 1ms
        m_elapsedTimer = startTimer(1);
        // 文本变为暂停
        ui->m_btnStart->setText("暂停");
    }else{// 文本为暂停
        // 关闭定时器
        killTimer(m_elapsedTimer);
        // 文本变为开始
        ui->m_btnStart->setText("开始");
    }
}

// 复位按钮槽函数
void TimerDialog::on_m_btnReset_clicked()
{
    // 设置复位时间为0:0:0.000
    m_elapsed.setHMS(0,0,0);
    // 将时分秒毫秒显示到m_lcdElapsed中
    ui->m_lcdElapsed->display(
                m_elapsed.toString("HH:mm:ss.zzz"));
}
