#ifndef CELLDIALOG_H
#define CELLDIALOG_H

#include <QDialog>

namespace Ui {
class CellDialog;
}

class CellDialog : public QDialog
{
    Q_OBJECT

protected:
    //cellDialog对象 - 对话框界面 - 显式
    //窗口被关闭 - 调用该函数
    void closeEvent(QCloseEvent*);
    //显示事件 - 窗口被现实 - 调用该函数
    void showEvent(QShowEvent *);

public:
    explicit CellDialog(QWidget *parent = nullptr);
    ~CellDialog();

signals:
    //将行 / 列 / 文本内容传递给父窗口
    void  updateCell(int row, int col, QString const& content);
    //工具栏是否使能
    void enableCell(bool enabled);

public slots:
    //设置最大值和最小值 - 行和列的最大值
    void setMaximum(int rowCount, int columCount);
    //对话框 - 设置当前行 / 列 / 文本
    void setCurrent(int row, int col, QString const& content);

private slots:
    void on_m_btnUpdate_clicked();

private:
    Ui::CellDialog *ui;
};

#endif // CELLDIALOG_H
