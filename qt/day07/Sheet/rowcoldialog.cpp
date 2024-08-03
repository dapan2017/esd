#include "rowcoldialog.h"
#include "ui_rowcoldialog.h"

RowColDialog::RowColDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::RowColDialog)
{
    ui->setupUi(this);
}

RowColDialog::~RowColDialog()
{
    delete ui;
}

//要设置spinRow的数
//例如:如果参数是100, 就设置spinRow的值为100
void  RowColDialog::setRowCount(int rowCount)
{
    ui->m_spinRow->setValue(rowCount);
}
//要设置的行数 - 返回给父窗口
int RowColDialog::getRowCount(void)
{
    return ui->m_spinRow->value();
}

void  RowColDialog::setColCount(int colCount)
{
    ui->m_spinCol->setValue(colCount);
}
int RowColDialog::getColCount(void)
{
    return ui->m_spinCol->value();
}
