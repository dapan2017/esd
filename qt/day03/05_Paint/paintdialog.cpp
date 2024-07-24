#include "paintdialog.h"
#include "ui_paintdialog.h"

#include <QPainter>
PaintDialog::PaintDialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::PaintDialog)
{
    ui->setupUi(this);
}

PaintDialog::~PaintDialog()
{
    delete ui;
}

void PaintDialog::paintEvent(QPaintEvent*)
{
    QPainter painter(this);

    QPen pen;
    pen.setColor(Qt::red);
    pen.setWidth(3); // 线宽是3个像素点
    pen.setStyle(Qt::SolidLine); // 实线
    pen.setJoinStyle(Qt::RoundJoin); // 圆角
    // painter使用上述的这根笔
    painter.setPen(pen);

    QBrush brush;
    //brush.setColor(Qt::yellow); // 黄色
    //brush.setStyle(Qt::SolidPattern); // 实色填充
    brush.setTextureImage(QImage(":/images/1.png"));
    brush.setStyle(Qt::TexturePattern);
    painter.setBrush(brush); // painter使用brush这个画刷

    int w = width();
    int h = height();

    // 绘制一个区域
    painter.drawRect(QRect(QPoint(w/4, h/4),
                           QPoint(w*3/4, h*3/4)));
}




