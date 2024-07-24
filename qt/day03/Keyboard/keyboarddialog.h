#ifndef KEYBOARDDIALOG_H
#define KEYBOARDDIALOG_H

#include <QDialog>

QT_BEGIN_NAMESPACE
namespace Ui { class KeyboardDialog; }
QT_END_NAMESPACE

class KeyboardDialog : public QDialog
{
    Q_OBJECT

public:
    KeyboardDialog(QWidget *parent = nullptr);
    ~KeyboardDialog();

protected:
    void keyPressEvent(QKeyEvent* e);

private:
    Ui::KeyboardDialog *ui;
};
#endif // KEYBOARDDIALOG_H
