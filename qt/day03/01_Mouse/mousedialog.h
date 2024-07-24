#ifndef MOUSEDIALOG_H
#define MOUSEDIALOG_H

#include <QDialog>

QT_BEGIN_NAMESPACE
namespace Ui { class MouseDialog; }
QT_END_NAMESPACE

class MouseDialog : public QDialog
{
    Q_OBJECT

public:
    MouseDialog(QWidget *parent = nullptr);
    ~MouseDialog();

protected: // 按下 - 移动 - 松开
    void  mousePressEvent(QMouseEvent*);
    void  mouseMoveEvent(QMouseEvent*);
    void  mouseReleaseEvent(QMouseEvent*);
private:
    Ui::MouseDialog *ui;
    bool m_dragging; // 判断鼠标点击是否在label的范围中
    QPoint m_offset; // 鼠标和label的相对位置
};
#endif // MOUSEDIALOG_H
