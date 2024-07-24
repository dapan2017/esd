#include "calculatordialog.h"
#include "ui_calculatordialog.h"

#include <QDoubleValidator> // 双精度浮点数验证器

CalculatorDialog::CalculatorDialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::CalculatorDialog)
{
    ui->setupUi(this);

    // 给m_editX和m_editY添加浮点数验证器
    ui->m_editX->setValidator(new QDoubleValidator(this));
    ui->m_editY->setValidator(new QDoubleValidator(this));

    // 左/右操作数有数据 - 告诉使能按钮函数
    // 左操作数有数据 - 触发textChanged信号 - this - 在enalbeButton函数中处理
    connect(ui->m_editX, SIGNAL(textChanged(QString)),
            this, SLOT(enableButton()));
    connect(ui->m_editY, SIGNAL(textChanged(QString)),
            this, SLOT(enableButton()));
}

CalculatorDialog::~CalculatorDialog()
{
    delete ui;
}

//信号 - clicked - 槽函数 - on_控件名_信号名
// 点击按钮槽函数
// 1.获取左右操作数文本
// 2.转换为对应的数字
// 3.求和得到的是数字
// 4.将数字转为字符串
// 5.将字符串放到m_exitZ中
void CalculatorDialog::on_m_button_clicked()
{
    ui->m_editZ->setText(
                    QString::number(ui->m_editX->text().toDouble() +
                     ui->m_editY->text().toDouble()));
}

// 使能按钮槽函数
// 判断左右操作数是否是有效数字
// 左操作数 - 1.获取控件上的信息 2.转换为对应的数字 判断该信息是否有效呢
void CalculatorDialog::enableButton()
{
    bool xOk, yOk;
    // 获取控件上的信息 -> 转换为数字 -> 成功,xOk==true; 失败,xOk==false;
    ui->m_editX->text().toDouble(&xOk);
    ui->m_editY->text().toDouble(&yOk);
    // 当xOk==真, 而且yOk==真 - 按钮使能
    // setEnabled使能某个控件
    ui->m_button->setEnabled(xOk && yOk);
}

