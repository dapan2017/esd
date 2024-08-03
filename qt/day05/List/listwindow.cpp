#include "listwindow.h"
#include "ui_listwindow.h"

#include <QMenu>
#include <QToolButton>

ListWindow::ListWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::ListWindow)
{
    ui->setupUi(this);

    // 1.为QToolButton添加QAction
    ui->m_btnInit->setDefaultAction(ui->m_actInit);
    ui->m_btnClear->setDefaultAction(ui->m_actClear);
    ui->m_btnAppend->setDefaultAction(ui->m_actAppend);
    ui->m_btnInsert->setDefaultAction(ui->m_actInsert);
    ui->m_btnDelete->setDefaultAction(ui->m_actDelete);

    ui->m_btnCheckAll->setDefaultAction(ui->m_actCheckAll);
    ui->m_btnCheckNone->setDefaultAction(ui->m_actCheckNone);
    ui->m_btnCheckInverse->setDefaultAction(ui->m_actCheckInverse);
    ui->m_btnCheck->setDefaultAction(ui->m_actCheck);

    //构建一个菜单
    QMenu* menuCheck = new QMenu(this);
    menuCheck->addAction(ui->m_actCheckAll);
    menuCheck->addAction(ui->m_actCheckNone);
    menuCheck->addAction(ui->m_actCheckInverse);
    ui->m_btnCheck->setMenu(menuCheck);

    // 构建一个ToolButton,添加到工具栏
    // 1.构建ToolButton
    QToolButton* btnCheck = new QToolButton(this);
    btnCheck->setPopupMode(QToolButton::InstantPopup);
    btnCheck->setDefaultAction(ui->m_actCheck);
    btnCheck->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
    // 2.给改ToolButton添加菜单
    btnCheck->setMenu(menuCheck);
    // 3.将ToolButton加到工具栏
    ui->toolBar->addWidget(btnCheck);

    ui->toolBar->addSeparator();

    ui->toolBar->addAction(ui->m_actExit);
}

ListWindow::~ListWindow()
{
    delete ui;
}

// 初始化槽函数
void ListWindow::on_m_actInit_triggered()
{
    // 添加表项
    // 构建QListWidgetItemdu对象
    QListWidgetItem* item = new QListWidgetItem(
                QIcon(":/images/check.ico"), "初始化表项");
    item->setCheckState(Qt::Checked);
    if(ui->m_checkEditable->isChecked()) // 可编辑被选中
        item->setFlags(item->flags() | Qt::ItemIsEditable);

    ui->m_list->addItem(item);
}

void ListWindow::on_m_actClear_triggered()
{
    ui->m_list->clear();
}

// 添加项
void ListWindow::on_m_actAppend_triggered()
{
    QListWidgetItem* item = new QListWidgetItem(
                QIcon(":/images/check.ico"), "添加列表项");
    item->setCheckState(Qt::Checked);
    if(ui->m_checkEditable->isChecked()) // 可编辑被选中
        item->setFlags(item->flags() | Qt::ItemIsEditable);

    ui->m_list->addItem(item);
}

// 插入列表项
void ListWindow::on_m_actInsert_triggered()
{
    QListWidgetItem* item = new QListWidgetItem(
                QIcon(":/images/check.ico"), "插入列表项");
    item->setCheckState(Qt::Checked);
    if(ui->m_checkEditable->isChecked()) // 可编辑被选中
        item->setFlags(item->flags() | Qt::ItemIsEditable);

    ui->m_list->insertItem(ui->m_list->currentRow(), item);

}
// 删除列表项
// 删除当前行
void ListWindow::on_m_actDelete_triggered()
{
    delete ui->m_list->takeItem(ui->m_list->currentRow());
}

// 全选
void ListWindow::on_m_actCheckAll_triggered()
{
    // 1.遍历所有的列表项, 将每个列表项设置为checked
    // 获取列表项个数
    int cnt = ui->m_list->count();

    for(int i = 0; i < cnt; i++)
        ui->m_list->item(i)->setCheckState(Qt::Checked);
}

// 全不选
void ListWindow::on_m_actCheckNone_triggered()
{
    // 1.遍历所有的列表项, 将每个列表项设置为unchecked
    // 获取列表项个数
    int cnt = ui->m_list->count();

    for(int i = 0; i < cnt; i++)
        ui->m_list->item(i)->setCheckState(Qt::Unchecked);
}
// 反选
void ListWindow::on_m_actCheckInverse_triggered()
{
    // 1.遍历所有的列表项, 将每个列表项设置为相反的状态
    // 获取列表项个数
    int cnt = ui->m_list->count();

    // 获取编号为i的列表项状态 ui->m_list->item(i)->checkState()
    for(int i = 0; i < cnt; i++)
        ui->m_list->item(i)->setCheckState(
            ui->m_list->item(i)->checkState() == Qt::Checked ?
                        Qt::Unchecked : Qt::Checked);
}

// checkec, 真, 全部可编辑; 假, 都不能编辑
void ListWindow::on_m_checkEditable_clicked(bool checked)
{
    int cnt = ui->m_list->count();

    for(int i = 0; i < cnt; i++){
        QListWidgetItem* item = ui->m_list->item(i);

        if(checked)
            item->setFlags(item->flags() | Qt::ItemIsEditable);
        else
            item->setFlags(item->flags() & ~Qt::ItemIsEditable);
    }
}

// current - 当前选中的列表项
// previous -上一个选中的列表项
// 每次选择的内容发生改变 - 改变的文本获取,放到多行文本框中
void ListWindow::on_m_list_currentItemChanged(QListWidgetItem *current, QListWidgetItem *previous)
{
    QString str = "[";

    if(previous)
        str += previous->text(); // 上一项的文本

    str += "]->[";

    if(current)
        str += current->text();

    str += "]";

    ui->m_editChanged->appendPlainText(str);
}


