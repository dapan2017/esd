#ifndef PAINTDIALOG_H
#define PAINTDIALOG_H

#include <QDialog>

QT_BEGIN_NAMESPACE
namespace Ui { class PaintDialog; }
QT_END_NAMESPACE

class PaintDialog : public QDialog
{
    Q_OBJECT

public:
    PaintDialog(QWidget *parent = nullptr);
    ~PaintDialog();

// 绘制图形 - 触发绘图之间 - paintEvent函数
protected:
   void paintEvent(QPaintEvent*);

private:
    Ui::PaintDialog *ui;
};
#endif // PAINTDIALOG_H
