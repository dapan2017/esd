#include "contexdialog.h"
#include "ui_contexdialog.h"

#include <QMessageBox> // 提示框
#include <QMenu>

ContexDialog::ContexDialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::ContexDialog)
{
    ui->setupUi(this);
}

ContexDialog::~ContexDialog()
{
    delete ui;
}


// 关于槽函数
void ContexDialog::on_m_actAbout_triggered()
{
    QMessageBox::about(this, windowTitle(),
                       "右键菜单演示程序 1.0 版本");
}

// 右键触发的槽函数
void ContexDialog::on_ContexDialog_customContextMenuRequested(const QPoint &pos)
{
    Q_UNUSED(pos);

    // 1. 构建一个菜单
    QMenu* menu = new QMenu;

    // 2. 向菜单添加action
    menu->addAction(ui->m_actAbout);
    menu->addSeparator();  // 添加分隔符
    menu->addAction(ui->m_actExit);

    // 3. 菜单显示
    // QCursor::pos() - 静态方法(函数) - 获取点击的全局位置
    // 返回QPoint - 返回鼠标的x,y坐标
    menu->exec(QCursor::pos());

    delete  menu;

}
