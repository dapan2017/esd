#include <QPainter>
#include <QPainterPath>

#include "pathdialog.h"
#include "ui_pathdialog.h"

PathDialog::PathDialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::PathDialog)
{
    ui->setupUi(this);
}

PathDialog::~PathDialog()
{
    delete ui;
}

void PathDialog::paintEvent(QPaintEvent*)
{
    QPainter painter(this);
    painter.setRenderHint(QPainter::Antialiasing);

    int w = width(), h = height();

    QPen pen;
    pen.setColor(Qt::red);
    pen.setWidth(3);
    pen.setStyle(Qt::SolidLine);
    pen.setJoinStyle(Qt::MiterJoin);
    painter.setPen(pen);
    QBrush brush;
    brush.setColor(Qt::yellow);
    brush.setStyle(Qt::SolidPattern);
    painter.setBrush(brush);

    QPainterPath path;
    path.moveTo(-100, 0);
    //添加了一个二次贝塞尔曲线(抛物线), 控制点是(-50, -100), 终点是(0,0)
    path.quadTo(QPoint(-50, -100), QPoint(0, 0));
    path.quadTo(QPoint(50, 100), QPoint(100, 0));
    //关闭当前子路径, 将路径的第一个点和最后一个点封闭起来, 形成了一个封闭的多边形
    path.closeSubpath();

    //保存绘制的各种状态
    painter.save();
    //将坐标系原地移动到(w/3, h/3)
    painter.translate(w/3, h/3);
    //绘制图形
    painter.drawPath(path);
    //恢复上一次的状态
    painter.restore();

    painter.save();
    painter.translate(w*2/3, h/3);
    //横纵坐标都缩小0.5倍
    painter.scale(0.5, 0.5);
    painter.drawPath(path);
    painter.restore();

    painter.save();
    painter.translate(w/3, h*2/3);
    //图像旋转90度(顺时针)
    painter.rotate(90);
    painter.drawPath(path);
    painter.restore();

    painter.save();
    painter.translate(w*2/3, h*2/3);
    painter.shear(-1.5, 0);
    painter.drawPath(path);
    painter.restore();

}
