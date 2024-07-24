#include "datetimedialog.h"
#include "ui_datetimedialog.h"

DateTimeDialog::DateTimeDialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::DateTimeDialog)
{
    ui->setupUi(this);

    on_m_btnGet_clicked();
    on_m_calendar_selectionChanged();
}

DateTimeDialog::~DateTimeDialog()
{
    delete ui;
}


// 月份牌选择改变槽函数
// QDate selectedDate() const 获取选中的日期的日期
void DateTimeDialog::on_m_calendar_selectionChanged()
{
    // 1. 选中,获取的就是日期
    // 2. 将日期转换为字符串
    // 3. 将字符串放到QLineEdit中
    ui->m_editCalendar->setText(
                ui->m_calendar->selectedDate().toString(
                ui->m_dateEdit->displayFormat()));
}

// text() - setText()
// 获取按钮槽函数
// dateTime.date() - 日期对象
void DateTimeDialog::on_m_btnGet_clicked()
{
    // 获取当前日期时间
    QDateTime dateTime = QDateTime::currentDateTime();

    ui->m_dateEdit->setDate( dateTime.date());
    ui->m_timeEdit->setTime( dateTime.time());
    ui->m_datetimeEdit->setDateTime(dateTime);

    // 当前的日期/时间/日期时间转换为字符串
    // 将对应的字符串放到右边的lineEdit中
    // 1.获取日期对象
    // 2.转换为字符串 - 格式
    // 3.将该字符串输出到右边QLineEdit中
    ui->m_editDate->setText(
        dateTime.date().toString(ui->m_dateEdit->displayFormat()));
    ui->m_editTime->setText(
        dateTime.time().toString(ui->m_timeEdit->displayFormat()));
    ui->m_editDateTime->setText(
        dateTime.toString(ui->m_datetimeEdit->displayFormat()));

}

// 设置按钮槽函数
void DateTimeDialog::on_m_btnSet_clicked()
{
    // 1. 获取QLineEdit字符串    ui->m_editDate->text()
    // 2. 转换为QDate类型对象
    //  QDate QDate::fromString(const QString &string,
    //              const QString &format);
    // 3. 将转换得到的对象放到m_dateEdit中
    ui->m_dateEdit->setDate( QDate::fromString(
        ui->m_editDate->text(), ui->m_dateEdit->displayFormat()));
    ui->m_timeEdit->setTime( QTime::fromString(
        ui->m_editTime->text(), ui->m_timeEdit->displayFormat()));
    ui->m_datetimeEdit->setDateTime( QDateTime::fromString(
        ui->m_editDateTime->text(), ui->m_datetimeEdit->displayFormat()));
}
