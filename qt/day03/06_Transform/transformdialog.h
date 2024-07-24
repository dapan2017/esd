#ifndef TRANSFORMDIALOG_H
#define TRANSFORMDIALOG_H

#include <QDialog>

QT_BEGIN_NAMESPACE
namespace Ui { class TransformDialog; }
QT_END_NAMESPACE

class TransformDialog : public QDialog
{
    Q_OBJECT

public:
    TransformDialog(QWidget *parent = nullptr);
    ~TransformDialog();
protected:
    void paintEvent(QPaintEvent*);

private:
    Ui::TransformDialog *ui;
};
#endif // TRANSFORMDIALOG_H
