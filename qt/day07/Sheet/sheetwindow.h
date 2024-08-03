#ifndef SHEETWINDOW_H
#define SHEETWINDOW_H

#include <QMainWindow>
#include <QLabel>
#include <QStandardItemModel>
#include <QItemSelectionModel>

#include "celldialog.h"

QT_BEGIN_NAMESPACE
namespace Ui { class SheetWindow; }
QT_END_NAMESPACE

class SheetWindow : public QMainWindow
{
    Q_OBJECT

public:
    SheetWindow(QWidget *parent = nullptr);
    ~SheetWindow();

signals://父窗口 -> 对话框
    void setMaximum(int rowCount, int ColumnCount);//信号, 后续传递给对话框
    void setCurrent(int row, int col, QString const& content);//选中的行,列,内容
public slots: //对话框 -> 父窗口
    void  updateCell(int row, int col, QString const& content);
    void enableCell(bool enabled);//判断菜单按钮是否使能

private slots:
    void on_m_actRowcol_triggered();
    void on_m_actHeader_triggered();
    void on_m_actCell_triggered();

    //m_table点击对应的槽函数
    void on_m_table_clicked(const QModelIndex &index);

    void on_m_selection_currentChanged(QModelIndex const& current,QModelIndex const& previous);

private:
    Ui::SheetWindow *ui;
    QLabel* m_labCellPos;
    QLabel* m_labCellText;
    QStandardItemModel* m_model;
    QItemSelectionModel* m_selection;
    CellDialog* m_dlgCell;
};
#endif // SHEETWINDOW_H
