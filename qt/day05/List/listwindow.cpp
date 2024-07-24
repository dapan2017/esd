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

//
void ListWindow::on_m_actInsert_triggered()
{

}

void ListWindow::on_m_actDelete_triggered()
{

}

void ListWindow::on_m_actAppend_triggered()
{

}

void ListWindow::on_m_actCheckAll_triggered()
{

}

void ListWindow::on_m_actCheckNone_triggered()
{

}

void ListWindow::on_m_actCheckInverse_triggered()
{

}

void ListWindow::on_m_checkEditable_clicked(bool checked)
{

}

void ListWindow::on_m_list_currentItemChanged(QListWidgetItem *current, QListWidgetItem *previous)
{

}


