#ifndef HEADERDIALOG_H
#define HEADERDIALOG_H

#include <QDialog>
#include <QStringListModel>

namespace Ui {
class HeaderDialog;
}

class HeaderDialog : public QDialog
{
    Q_OBJECT

public:
    explicit HeaderDialog(QWidget *parent = nullptr);
    ~HeaderDialog();

    //父窗口通过该函数将数据传递给对话框
    void setHeaderLabels(QStringList const& headerLabels);
    //对话框通过返回值将数据传递给父窗口
    QStringList getHeaderLabels(void);

private:
    Ui::HeaderDialog *ui;
    QStringListModel* m_model;
};

#endif // HEADERDIALOG_H
