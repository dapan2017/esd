#ifndef DUALCOLOREDBALLDIALOG_H
#define DUALCOLOREDBALLDIALOG_H

#include <QDialog>
#include <QTime>
#include <QKeyEvent>  // 键盘事件

QT_BEGIN_NAMESPACE
namespace Ui { class DualColoredBallDialog; }
QT_END_NAMESPACE

class DualColoredBallDialog : public QDialog
{
    Q_OBJECT

public:
    DualColoredBallDialog(QWidget *parent = nullptr);
    ~DualColoredBallDialog();
protected:
    void  keyPressEvent(QKeyEvent* e); // 键盘事件
    void  timerEvent(QTimerEvent* e); // 定时器事件
private:
    void  updateRed(void); // 更新红球
    void  updateBlue(void); // 更新蓝球

private:
    Ui::DualColoredBallDialog *ui;
    int m_redTimer; // 红球的定时器id
    int m_blueTimer; // 蓝球的定时器id
    bool m_stop; // 判断是否停止
};
#endif // DUALCOLOREDBALLDIALOG_H
