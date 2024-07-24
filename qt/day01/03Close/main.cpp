// main.cpp
#include <QApplication>
#include <QLabel>
#include <QPushButton>
#include <QWidget>
#include <QMainWindow>
#include <QDialog>

int main(int argc, char* argv[]){

    QApplication app(argc, argv);

    // 创建父窗口
    //QWidget parent;
    //QMainWindow parent;
    QDialog parent;
    parent.move(300, 200);// 向右移动300像素点，向下移动200像素点
    parent.resize(500, 400);

    // 让label和pushbutton停靠在父窗口上 

    // 创建标签停靠在父窗口上 
    QLabel label("我是一个子窗口", &parent);
    label.move(80, 30);
    label.resize(140, 30);

    // 创建按钮停靠在父窗口上 
    QPushButton button("保存", &parent);
    button.move(30, 90);
    button.resize(100, 30);
    
    QPushButton* pbutton = new QPushButton("不保存", &parent);
    pbutton->move(160, 90);
    pbutton->resize(100, 30);

    // 显示父窗口 
    parent.show();

    // 建立信号和槽的连接
    // 保存 - clicked() - label - close()
    QObject::connect(&button, SIGNAL(clicked()), &label, SLOT(close()));
    // 保存 - clicked() - 不保存 - close()
    QObject::connect(&button, SIGNAL(clicked()), pbutton, SLOT(close()));

    // 不保存 - clicked() - 父窗口 - close()
    QObject::connect(pbutton, SIGNAL(clicked()), &parent, SLOT(close()));

    return app.exec();
}
