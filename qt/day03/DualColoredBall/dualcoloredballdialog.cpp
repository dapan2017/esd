#include "dualcoloredballdialog.h"
#include "ui_dualcoloredballdialog.h"

DualColoredBallDialog::DualColoredBallDialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::DualColoredBallDialog)
    , m_stop(true) // 默认是停止状态
{
    ui->setupUi(this);
    // 设置随机数种子
    qsrand(QTime::currentTime().msec());

    updateRed();
    updateBlue();
}

DualColoredBallDialog::~DualColoredBallDialog()
{
    delete ui;
}

void  DualColoredBallDialog::keyPressEvent(QKeyEvent* e)
{
    if(e->key() == Qt::Key_Space){
        if(m_stop)
        { // 停止状态
            // 开启两个定时器
            m_redTimer = startTimer(100);
            m_blueTimer = startTimer(500);
        }
        else
        { // 运行状态
            // 关闭两个定时器
            killTimer(m_redTimer);
            killTimer(m_blueTimer);
        }
        // 运行状态取反
        m_stop = !m_stop;
    }
}
void  DualColoredBallDialog::timerEvent(QTimerEvent* e)
{
    if(e->timerId() == m_redTimer) // 红球的定时器触发
        updateRed();
    else if(e->timerId() == m_blueTimer) // 蓝球的定时器触发
        updateBlue();
}
// 获取随机的1-33的数字 + 将数字放到label上
// 1.设置随机数种子 - 构造函数
// 2.获取1-33的随机数 qrand() % 33 + 1
// 3.将数字转换为字符串 number()    QString::number( 数字)
// 4.将字符串放到到label上  setText()
void  DualColoredBallDialog::updateRed(void)
{
    ui->m_labelRed->setText( QString::number( qrand() % 33 + 1));
}
// 获取随机的1-16的数字 + 将数字放到label上
void  DualColoredBallDialog::updateBlue(void)
{
    ui->m_labelBlue->setText( QString::number( qrand() % 16 + 1));
}


