#include <QApplication>
#include <QLabel>
#include <QPushButton>

int main(int argc, char* argv[]){
    
    // 构建Qt应用程序的实例
    QApplication app(argc, argv);


    // 构造了标签，内容是Hello,Qt
    QLabel label("Hello, Qt!!!");
    // 标签显示出来 - 几乎所有的GUI控件对象都可以调用该函数
    label.show();

    // 构造按钮对象
    QPushButton button("我是按钮");
    // 将按钮显示出来
    button.show();

    
    // 进入到了Qt的事件循环，应用程序的主循环
    // 负责处理用户的输入、来自系统的事件
    // exec函数会阻塞直到程序结束
    return app.exec();
}
