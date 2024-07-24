// main.cpp
#include <QApplication>
#include <QDialog>
#include <QSpinBox>
#include <QSlider>

int main(int argc, char* argv[]){

    QApplication app(argc, argv);

    // 创建父窗口
    QDialog parent;
    parent.move(300, 200);// 向右移动300像素点，向下移动200像素点
    parent.resize(500, 400);

    // 构建滑块 
    QSlider slider(Qt::Horizontal, &parent);
    slider.move(20, 40);
    slider.resize(150, 25);
    slider.setRange(0, 100);

    // 构建选值框
    QSpinBox spinBox(&parent);
    spinBox.move(140, 40);
    spinBox.resize(90, 25);
    spinBox.setRange(0, 100);

    // 显示父窗口 
    parent.show();

    // 滑块滑动 - 选值框改变 
    // 滑块 - ... - 选值框 - ...
    // 触发valueChange信号 - 将参数改变后的值给spinBox
    // 滑块滑动,触发valueChange信号, 给spinBox控件, 设置控件对应的值
    QObject::connect(&slider, SIGNAL(valueChanged(int)), 
                        &spinBox, SLOT(setValue(int)));
    // 选值框改变 - 滑块滑动 
    // 选值框发送信号给滑块 
    // 选值框改变, 触发valueChanged信号, 给slider控件, 设置控件对应的值 
    QObject::connect(&spinBox, SIGNAL(valueChanged(int)), 
                        &slider, SLOT(setValue(int)));

    return app.exec();
}
