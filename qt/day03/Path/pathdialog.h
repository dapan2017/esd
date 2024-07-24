#ifndef PATHDIALOG_H
#define PATHDIALOG_H

#include <QDialog>

QT_BEGIN_NAMESPACE
namespace Ui { class PathDialog; }
QT_END_NAMESPACE

class PathDialog : public QDialog
{
    Q_OBJECT

public:
    PathDialog(QWidget *parent = nullptr);
    ~PathDialog();

protected:
    void paintEvent(QPaintEvent*);

private:
    Ui::PathDialog *ui;
};
#endif // PATHDIALOG_H
