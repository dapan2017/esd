#include "comboboxdialog.h"
#include "ui_comboboxdialog.h"


#include <QStringList>
#include <QTextBlock>

ComboBoxDialog::ComboBoxDialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::ComboBoxDialog)
{
    ui->setupUi(this);
}

ComboBoxDialog::~ComboBoxDialog()
{
    delete ui;
}


// 简单组合框中的每次文本发生变化, 将变化后的文本放到多行文本框中
// arg1 - 变化后的文本
// 多行文本框 - 添加文本 : appendPlainText(QString)
void ComboBoxDialog::on_m_comboSimple_currentIndexChanged(const QString &arg1)
{
    if(!arg1.isEmpty()) // 非空
        ui->m_plainTextEdit->appendPlainText(arg1);
}

// 初始化槽函数
void ComboBoxDialog::on_m_btnInit_clicked()
{
    // 无图标表项
    ui->m_comboSimple->addItem("无图标表项");
    // 有图标表项
    ui->m_comboSimple->addItem(QIcon(":/images/unit.ico"), "有图标表项");
    // 添加多个表项
    QStringList items;
    items << "整体加表项1" << "整体加表项2" << "整体加表项3";
    ui->m_comboSimple->addItems(items);
}

// 清空按钮
void ComboBoxDialog::on_m_btnClear_clicked()
{
    ui->m_comboSimple->clear();
}

void ComboBoxDialog::on_m_btnAdd_clicked()
{
    ui->m_comboUserData->clear();

    QMap<QString, int>  cityZone;
    cityZone["北京"] = 10;
    cityZone["上海"] = 30;
    cityZone["天津"] = 40;
    cityZone["石家庄"] = 50;
    cityZone["重庆"] = 60;
    cityZone["广州"] = 70;
    cityZone["海口"] = 80;

    // keys()获取了所有的键放到了容器中 - 都是QString
    // 迭代容器中的每个元素, 每次循环都是将其中的数据赋值给city
    // C++11
    for(QString const& city : cityZone.keys()){
        ui->m_comboUserData->addItem(city, cityZone[city]);
    }
}

// 追加
void ComboBoxDialog::on_m_btnAppend_clicked()
{
    // 获取文本框的文档对象指针
    QTextDocument* doc = ui->m_plainTextEdit->document();
    // 获取文本的行数
    int cnt = doc->blockCount();
    // 每行的内容放到简单对话框
    //ui->m_comboSimple->addItem( doc->findBlockByNumber(0).text());
    for(int i = 0; i < cnt; i++){
        ui->m_comboSimple->addItem(
                    doc->findBlockByNumber(i).text());
    }
}

// 清除槽函数
void ComboBoxDialog::on_m_btnErase_clicked()
{
    ui->m_plainTextEdit->clear();
}

// 可编辑按钮
// 没选中, checked,假; 选中, checked, 真;
void ComboBoxDialog::on_m_checkEditable_clicked(bool checked)
{
    ui->m_comboSimple->setEditable(checked);
}

// 只读
// 参数,真,文本框只读; 假, 可以修改
void ComboBoxDialog::on_m_checkReadOnly_clicked(bool checked)
{
    ui->m_plainTextEdit->setReadOnly(checked);
}

// 城市ComboBox项选择改变 - 添加了多行文本框中
// arg1
void ComboBoxDialog::on_m_comboUserData_currentIndexChanged(const QString &arg1)
{
    if(!arg1.isEmpty()){
        // 获取当前项的不可见数据
        QVariant zone = ui->m_comboUserData->currentData();
        ui->m_plainTextEdit->appendPlainText(
                    arg1 + ":" + zone.toString());
    }
}
