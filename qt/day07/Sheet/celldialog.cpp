#include "celldialog.h"
#include "ui_celldialog.h"

CellDialog::CellDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::CellDialog)
{
    ui->setupUi(this);

    //对话框 -> 主窗口
    connect(this, SIGNAL(updateCell(int,int,QString const&)),
            parent, SLOT(updateCell(int,int,QString const&)));
    connect(this, SIGNAL(enableCell(bool)),
            parent, SLOT(enableCell(bool)));

    //主窗口  -> 对话框
    connect(parent, SIGNAL(setMaximum(int,int)),
            this, SLOT(setMaximum(int,int)));
    connect(parent, SIGNAL(setCurrent(int,int, QString const&)),
            this, SLOT(setCurrent(int,int, QString const&)));

}

CellDialog::~CellDialog()
{
    delete ui;
}

//更新按钮槽函数
void CellDialog::on_m_btnUpdate_clicked()
{
    emit updateCell(
                ui->m_spinRow->value() - 1,
                ui->m_spinCol->value() - 1,
                ui->m_editContent->text());
}

//关闭事件处理函数
void CellDialog::closeEvent(QCloseEvent*)
{
    emit enableCell(true);
}
//显示事件处理函数 - 对话框显示 - 禁用
//触发enableCell信号 - 传递的参数是false
//信号 - 给主窗口 - 主窗口用槽函数处理
void CellDialog::showEvent(QShowEvent *)
{
    emit enableCell(false);
}
//设置行列最大值槽函数
//参数1 - 最大行 参数2 - 最大列
void CellDialog::setMaximum(int rowCount, int columCount)
{
    //对话框设置spinRow和spinCol的最大值
    ui->m_spinRow->setMaximum(rowCount);
    ui->m_spinCol->setMaximum(columCount);
}
//设置当前位置槽函数
void CellDialog::setCurrent(int row, int col, QString const& content)
{
    ui->m_spinRow->setValue(row);
    ui->m_spinCol->setValue(col);
    ui->m_editContent->setText(content);
}
