#ifndef SHAPEDIALOG_H
#define SHAPEDIALOG_H

#include <QDialog>

QT_BEGIN_NAMESPACE
namespace Ui { class ShapeDialog; }
QT_END_NAMESPACE

class ShapeDialog : public QDialog
{
    Q_OBJECT

public:
    ShapeDialog(QWidget *parent = nullptr);
    ~ShapeDialog();

protected:
    void paintEvent(QPaintEvent* e);

private:
    void drawPoint(void);     // 绘制点
    void drawLine(void);      // 绘制直线
    void drawRect(void);      // 绘制矩形
    void drawEllipse(void);   // 绘制椭圆
    void drawArc(void);       // 绘制弧
    void drawChord(void);     // 绘制弦
    void drawPie(void);       // 绘制扇形
    void drawPolyline(void);  // 绘制折线
    void drawPolygon(void);   // 绘制多边形
    void drawText(void);      // 绘制文本

private:
    Ui::ShapeDialog *ui;
};
#endif // SHAPEDIALOG_H
