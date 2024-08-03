#include "headerdialog.h"
#include "ui_headerdialog.h"

HeaderDialog::HeaderDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::HeaderDialog),
    m_model(new QStringListModel(this))
{
    ui->setupUi(this);

    ui->m_list->setModel(m_model);
}

HeaderDialog::~HeaderDialog()
{
    delete ui;
}

//参数是父窗口传递而来的字符串列表
//将其显示在m_list中
void HeaderDialog::setHeaderLabels(QStringList const& headerLabels)
{
    m_model->setStringList(headerLabels);
}
//返回模型所管理的字符串列表
QStringList HeaderDialog::getHeaderLabels(void)
{
    return m_model->stringList();
}
