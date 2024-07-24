#include "logindialog.h"
#include "ui_logindialog.h"

#include <QMessageBox> // 消息提示框类
#include <QDebug>   // 调试输出

LoginDialog::LoginDialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::LoginDialog)
{
    ui->setupUi(this);
}

LoginDialog::~LoginDialog()
{
    delete ui;
}

// username : wukong   passwd : 123456
// ok对应的槽函数
void LoginDialog::on_m_btnBox_accepted()
{
    if(ui->m_editUsername->text() == "wukong" &&
            ui->m_editPasswd->text() == "123456"){
        qDebug() << "登录成功";
        close();
    }else{
        // windowTitle() - 项目标题
        QMessageBox::critical(this, windowTitle(),
                "用户名或密码错误", QMessageBox::Ok);
    }
}

// cancel对应的槽函数
// 弹一个问题的对话框 - Yes和No两个按钮 - 按的是哪个呢
void LoginDialog::on_m_btnBox_rejected()
{
    if(QMessageBox::question(this, windowTitle(),
              "你确定要取消吗?",
              QMessageBox::Yes | QMessageBox::No)
              == QMessageBox::Yes){
        qDebug() << "取消登录";
        close();
    }

}
