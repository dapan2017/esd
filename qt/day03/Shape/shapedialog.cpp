#include <QPainter>

#include "shapedialog.h"
#include "ui_shapedialog.h"

ShapeDialog::ShapeDialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::ShapeDialog)
{
    ui->setupUi(this);
}

ShapeDialog::~ShapeDialog()
{
    delete ui;
}

void ShapeDialog::paintEvent(QPaintEvent* e)
{
    //drawPoint();
    //drawLine();
    //drawRect();
    //drawEllipse();
    //drawArc(); // 弧
    //drawChord(); // 弦
    //drawPie();
    //drawPolyline();
    //drawPolygon();
    drawText();
}

// 绘制点
void ShapeDialog::drawPoint(void)
{
    QPainter painter(this);

    //反锯齿, 绘制出来更加平滑
    painter.setRenderHint(QPainter::Antialiasing);

    int w = width(), h = height();
    int xo = (w - 256) / 2, yo = (h - 256) / 2;
/*
    QPen pen;
    pen.setColor(Qt::red);
    painter.setPen(pen);
    painter.drawPoint(QPoint(w / 2, h / 2));
*/
    for (int x = 0; x < 256; ++x) // 0-255
        for (int y = 0; y < 256; ++y)
        {
            QPen pen;
            pen.setColor(QColor(x, y, 0));
            painter.setPen(pen);
            painter.drawPoint(QPoint(xo + x, yo + y));
        }

}

// 绘制直线
void ShapeDialog::drawLine(void)
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

    painter.drawLine(QLine(QPoint(0, 0), QPoint(w, h)));
    painter.drawLine(QLine(QPoint(w, 0), QPoint(0, h)));
}

// 绘制矩形
void ShapeDialog::drawRect(void)
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

    painter.drawRect(QRect(QPoint(w/4, h/4), QPoint(w*3/4, h*3/4)));
}

// 绘制椭圆
void ShapeDialog::drawEllipse(void)
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

    painter.drawEllipse(QRect(QPoint(w/4, h/4), QPoint(w*3/4, h*3/4)));
}

// 绘制弧
void ShapeDialog::drawArc(void)
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

    painter.drawArc(QRect(QPoint(w/4, h/4), QPoint(w*3/4, h*3/4)),
        30 * 16, 120 * 16);
}

// 绘制弦
void ShapeDialog::drawChord(void)
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

    painter.drawChord(QRect(QPoint(w/4, h/4), QPoint(w*3/4, h*3/4)),
        30 * 16, 120 * 16);
}

// 绘制扇形
void ShapeDialog::drawPie(void)
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

    painter.drawPie(QRect(QPoint(w/4, h/4), QPoint(w*3/4, h*3/4)),
        30 * 16, 120 * 16);
}

// 绘制折线
void ShapeDialog::drawPolyline(void)
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

    painter.drawPolyline(QPolygon()
        << QPoint(w/4, h*3/4) << QPoint(w/2, h/4)
                         << QPoint(w*3/4, h*3/4));
}

// 绘制多边形
void ShapeDialog::drawPolygon(void)
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

    painter.drawPolygon(QPolygon()
        << QPoint(w/4, h*3/4) << QPoint(w/2, h/4) << QPoint(w*3/4, h*3/4));
}

// 绘制文本
void ShapeDialog::drawText(void)
{
    QPainter painter(this);
    painter.setRenderHint(QPainter::Antialiasing);

    int w = width(), h = height();

    QPen pen;
    pen.setColor(Qt::red);
    painter.setPen(pen);
    QFont font;
    font.setFamily("Calibri");
    font.setPointSize(h/12);
    font.setBold(true);
    font.setItalic(true);
    font.setUnderline(true);
    painter.setFont(font);

    painter.drawText(QRect(QPoint(0, 0), QPoint(w, h)),
        Qt::AlignCenter | Qt::TextWordWrap,
        "The quick brown fox jumps over the lazy dog");
}
