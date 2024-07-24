#include "transformdialog.h"
#include "ui_transformdialog.h"

#include <QPainter>
TransformDialog::TransformDialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::TransformDialog)
{
    ui->setupUi(this);
}

TransformDialog::~TransformDialog()
{
    delete ui;
}

void TransformDialog::paintEvent(QPaintEvent*)
{
    QPainter painter(this);
    painter.setRenderHint(QPainter::TextAntialiasing);

    int w = width(), h = height();
    painter.translate(w/2, h/2); // painter绘制的坐标原点就是(w/2,h/2)
    painter.rotate(180); // 坐标想向右旋转180度
    painter.scale(-1.5, 1.5); // x:负方向放大1.5, y:正方向放大1.5倍
    painter.shear(2,0);

    QPen pen;
    pen.setWidth(8); // 线宽8像素
    pen.setStyle(Qt::SolidLine); // 实线
    pen.setJoinStyle(Qt::MiterJoin);
    pen.setColor(Qt::red);
    painter.setPen(pen);

    painter.drawLine(QPoint(-w/4, 0), QPoint(w/4, 0));
    painter.drawPolygon(QPolygon() <<
           QPoint(w/4, -5) << QPoint(w/4+10, 0) << QPoint(w/4, 5));

    pen.setColor(Qt::blue);
    painter.setPen(pen);
    painter.drawLine(QPoint(0, -h/4), QPoint(0, h/4));
    painter.drawPolygon(QPolygon() <<
           QPoint(-5, h/4) << QPoint(0, h/4+10) << QPoint(5, h/4));

}

