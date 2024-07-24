#ifndef REBOUNDEDBALLDIALOG_H
#define REBOUNDEDBALLDIALOG_H

#include <QDialog>

QT_BEGIN_NAMESPACE
namespace Ui { class ReboundedBallDialog; }
QT_END_NAMESPACE

class ReboundedBallDialog : public QDialog
{
    Q_OBJECT

public:
    ReboundedBallDialog(QWidget *parent = nullptr);
    ~ReboundedBallDialog();

protected:
    void paintEvent(QPaintEvent*); // 绘图事件
    void timerEvent(QTimerEvent*); // 定时器事件

private:
    Ui::ReboundedBallDialog *ui;
    int m_dia; // 小球的直径
    // QPoint m_off(5,5);
    QPoint m_pos, m_off; // m_pos:小球的位置 m_off:位置增量
    int m_timer; // 定时器ID

};
#endif // REBOUNDEDBALLDIALOG_H
