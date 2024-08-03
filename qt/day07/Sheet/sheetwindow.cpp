#include "sheetwindow.h"
#include "ui_sheetwindow.h"
#include "rowcoldialog.h"
#include "headerdialog.h"
#include "celldialog.h"

SheetWindow::SheetWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::SheetWindow)
    , m_labCellPos(new QLabel("单元格位置: "))
    , m_labCellText(new QLabel("单元格内容: "))
    , m_model(new QStandardItemModel(100, 100, this))
    , m_selection(new QItemSelectionModel(m_model))
    , m_dlgCell(new CellDialog(this))
{
    ui->setupUi(this);

    setCentralWidget(ui->m_table);

    m_labCellPos->setMinimumWidth(200);
    ui->statusbar->addWidget(m_labCellPos);
    m_labCellText->setMinimumWidth(200);
    ui->statusbar->addWidget(m_labCellText);

    ui->m_table->setModel(m_model);
    ui->m_table->setSelectionModel(m_selection);

    //建立信号和槽的连接关系
    connect(m_selection, SIGNAL(currentChanged(QModelIndex, QModelIndex)),
            this, SLOT(on_m_selection_currentChanged(QModelIndex,QModelIndex)));

}

SheetWindow::~SheetWindow()
{
    delete ui;
}


/*
    1.打开行列的时候将当前的行和列放到spinRow和spinCol中
    2.后续可以调整行列中的spinRow和spinCol数字
    3.点击确定 - 设置对应的行和列
    4.点击取消 - 退出行和列
-----------------------
    1.通过公有函数的方式将100,100传递给对话框 - 公有函数的参数 - 对话框的公有函数
    2.对话框(行列)将要设置的行和列给父窗口 - 公有函数的返回值 - 对话框的公有函数
    3.点击确定 - 给父窗口传递一个QDialogCode的枚举值
    4.点击取消 - 给附串口传递一个QDialogCode的枚举值
*/
void SheetWindow::on_m_actRowcol_triggered()
{
    RowColDialog dlg(this);
    //参数 - 当前表格共多少行
    dlg.setRowCount(m_model->rowCount());
    dlg.setColCount(m_model->columnCount());

    //如果点击的是确定按钮
    if(dlg.exec() == QDialog::Accepted)
    {
        m_model->setRowCount(dlg.getRowCount());
        m_model->setColumnCount(dlg.getColCount());

        emit setMaximum(dlg.getRowCount(), dlg.colorCount());
    }


}

/*
    1.父窗口将表头的信息传递给对话框 - 公有函数的参数
        对话框在listView将表头的信息显示出来 - 在对话框中需要提供一个模型来管理view中的数据
        QStringListModel
    2.对话将修改后的表头的信息传递给父窗口 - 公有函数的返回值
        父窗口拿到修改的后的信息 设置为新的表头
*/
void SheetWindow::on_m_actHeader_triggered()
{
    //构建一个字符串列表对象
    //将表头的所有的数据给该对象
    QStringList headerLabels;
    //循环一种有多少列
    //每循环一次就将表头的数据转换为字符串给字符串列表对象中
    //m_model->headerData(col, Qt::Horizontal, Qt::DisplayRole) - 每次循环获取的数据
    for(int col = 0; col < m_model->columnCount(); col++)
    {
        headerLabels.append(
           m_model->headerData(col, Qt::Horizontal, Qt::DisplayRole).toString());
    }

    HeaderDialog dlg(this);
    dlg.setHeaderLabels(headerLabels);

    //如果点击的是确定按钮
    //对话框将listview中的数据给父窗口 - 父窗口作为新的表头来使用
    if(dlg.exec() == QDialog::Accepted)
    {
        m_model->setHorizontalHeaderLabels(dlg.getHeaderLabels());
    }
}


/*
    1.父窗口如何将数据传递给对话框 - 信号和槽
        父窗口信号:  void setCurrent(int r, int c, QString const& content);
        对话框槽函数 : void  setCurrent(int r, int c, QString const& content);
        connect(parent, SIGNAL(setCurrent(int,int,QString)),
                this, SLOT(setCurrent(int,int,QString)));
        通过该中方式将数据从父窗口给到对话框
    2.对话框将数据给父窗口 对话框 - 信号(数据) - 父窗口 - 槽函数(参数)
-----------------------需求
    1.将行,列,文本传递给对话框
        对话框在spinRow, spinCol 和 m_editContent显示
    2.将行和列最大值传递给对话框
        对话框设置spinRow和spinCol最大值不要超过行列最大值
    3.点击更新后
        将行,列, 内容 - 更新到父窗口中
*/
void SheetWindow::on_m_actCell_triggered()
{
    //CellDialog dlg(this);
    //dlg.show(); //闪一下退出
    m_dlgCell->show();
}

//选中的位置 行/列/内容
void SheetWindow::on_m_table_clicked(const QModelIndex &index)
{
    emit setCurrent(index.row() + 1, index.column() + 1,
                    index.data().toString());
}
void SheetWindow::on_m_selection_currentChanged(QModelIndex const& current,QModelIndex const& previous)
{
    Q_UNUSED(previous);

    if(!current.isValid())
        return;

    m_labCellPos->setText(
                QString("单元格位置: 第%1行 第%2列").
                arg(current.row() + 1).
                arg(current.column() + 1));

    QStandardItem* item = m_model->itemFromIndex(current);
    m_labCellText->setText(" 单元格内容: " + item->text());

    emit setCurrent(current.row() + 1, current.column() + 1, item->text());
}

void  SheetWindow::updateCell(int row, int col, QString const& content)
{
    QModelIndex index = m_model->index(row, col);
    m_model->setData(index, content, Qt::DisplayRole);

    m_selection->clearSelection();
    m_selection->setCurrentIndex(index, QItemSelectionModel::Select);
}
//参数 真,使能单元action; 假,禁用单元action;
void SheetWindow::enableCell(bool enabled)
{
    ui->m_actCell->setEnabled(enabled);
}
