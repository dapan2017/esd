#ifndef CALCULATORDIALOG_H
#define CALCULATORDIALOG_H

#include <QDialog>

QT_BEGIN_NAMESPACE
namespace Ui { class CalculatorDialog; }
QT_END_NAMESPACE

class CalculatorDialog : public QDialog
{
    Q_OBJECT

public:
    CalculatorDialog(QWidget *parent = nullptr);
    ~CalculatorDialog();

private:
    // 将ui对象看做是计算机对象指针
    Ui::CalculatorDialog *ui;
};
#endif // CALCULATORDIALOG_H
