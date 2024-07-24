#include "reboundedballdialog.h"
#include "ui_reboundedballdialog.h"

#include <QPainter>
#include <algorithm>
using namespace std;

ReboundedBallDialog::ReboundedBallDialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::ReboundedBallDialog)
    , m_dia(50)
    , m_off(5,5)
{
    ui->setupUi(this);

    // 设置小球的初始位置
    m_pos.setX((width() - m_dia) / 2);
    m_pos.setY((height() - m_dia) / 2);

    m_timer = startTimer(10);
}

ReboundedBallDialog::~ReboundedBallDialog()
{
    delete ui;
}

// 绘制一个小球
void ReboundedBallDialog::paintEvent(QPaintEvent*)
{
    QPainter painter(this);
    painter.setRenderHint(QPainter::Antialiasing);

    QPen pen(Qt::red);
    painter.setPen(pen);

    // 创建一个从中心点向外辐射的渐变填充
    // 渐变的中心点是m_pos+1/3的横纵坐标
    // 渐变的半径是小球直径的2/3
    QRadialGradient brush(m_pos + QPoint(m_dia/3, m_dia/3), m_dia*2/3);
    brush.setColorAt(0, Qt::white);// 渐变的起点是白色
    brush.setColorAt(1, Qt::red); // 渐变的结束颜色是红色
    // 边界使用渐变到的位置的颜色
    brush.setSpread(QGradient::PadSpread);
    painter.setBrush(brush);

    // 绘制圆形 - 绘制一个正方形的内切椭圆
    painter.drawEllipse(QRect(m_pos, m_pos+QPoint(m_dia,m_dia)));
}
void ReboundedBallDialog::timerEvent(QTimerEvent*)
{
    // 更新m_pos的位置
    m_pos += m_off;

    // X - 方向最大坐标 Y - 方向最大坐标
    int X = width() - m_dia, Y = height() - m_dia;

    // X方向的变化
    // 到了两边的边界上
    if(m_pos.x() < 0 || m_pos.x() > X){
        m_pos.setX( min(max(0, m_pos.x()), X));
        // 碰到左右边界, X方向增量为相反数
        m_off.setX( -m_off.x());
    }

    if(m_pos.y() < 0 || m_pos.y() > Y){
        m_pos.setY( min(max(0, m_pos.y()), Y));
        m_off.setY(-m_off.y());
    }


    update(); // 触发绘图事件
}

