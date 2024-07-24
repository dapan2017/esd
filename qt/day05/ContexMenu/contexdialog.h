#ifndef CONTEXDIALOG_H
#define CONTEXDIALOG_H

#include <QDialog>

QT_BEGIN_NAMESPACE
namespace Ui { class ContexDialog; }
QT_END_NAMESPACE

class ContexDialog : public QDialog
{
    Q_OBJECT

public:
    ContexDialog(QWidget *parent = nullptr);
    ~ContexDialog();

private slots:
    void on_m_actAbout_triggered();

    void on_ContexDialog_customContextMenuRequested(const QPoint &pos);

private:
    Ui::ContexDialog *ui;
};
#endif // CONTEXDIALOG_H
