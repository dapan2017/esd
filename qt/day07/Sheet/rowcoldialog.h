#ifndef ROWCOLDIALOG_H
#define ROWCOLDIALOG_H

#include <QDialog>

namespace Ui {
class RowColDialog;
}

class RowColDialog : public QDialog
{
    Q_OBJECT

public:
    explicit RowColDialog(QWidget *parent = nullptr);
    ~RowColDialog();

    //公有函数 - 稍后让父窗口来调用该函数,将当前的行数传递过来
    //传过来后,设置spinRow的值
    void  setRowCount(int rowCount);
    //返回要设置的行数给父窗口
    int getRowCount(void);

    void  setColCount(int colCount);
    int getColCount(void);

private:
    Ui::RowColDialog *ui;
};

#endif // ROWCOLDIALOG_H
