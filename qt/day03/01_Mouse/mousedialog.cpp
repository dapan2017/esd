#include "mousedialog.h"
#include "ui_mousedialog.h"

#include <QMouseEvent> // 添加鼠标事件头文件

#include <algorithm> // max min
using namespace std;

MouseDialog::MouseDialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::MouseDialog)
{
    ui->setupUi(this);
}

MouseDialog::~MouseDialog()
{
    delete ui;
}

void  MouseDialog::mousePressEvent(QMouseEvent* e)
{
    // 前提 : 左键按下
    if(e->button() == Qt::LeftButton){
        // 1.获取label的区域
        // 默认区域从(0,0)开始的 - 区域应该从m_block的左上角
        QRect blockRect = ui->m_block->frameRect();
        // 统一坐标系
        // blockRect的区域左上角是m_block的坐标
        blockRect.translate(ui->m_block->pos());

        // 2.判断鼠标是否在label区域中
        // blockRect是否包含鼠标的位置 - true/false
        if(blockRect.contains(e->pos())){// 真,继续; 假,结束
            m_dragging = true; // 鼠标的点击在滑块中
            // 鼠标和滑块位置的相对位置
            m_offset = ui->m_block->pos() - e->pos();
        }
    }
}
/*
    x : 0 ~ (父窗口宽度 - label宽度)
    y : 0 ~ (父窗口高度 - label高度)
*/
void  MouseDialog::mouseMoveEvent(QMouseEvent* e)
{
    if(m_dragging){
        QPoint labelPos = e->pos() + m_offset;

        QSize windowSize = size();
        QSize blockSize = ui->m_block->size();

        // 设置x,y坐标的范围
        int xMin = 0, xMax = windowSize.width() - blockSize.width();
        int yMin = 0, yMax = windowSize.height() - blockSize.height();

        // 设置x,y坐标
        // labelPos.x(), xMin - 取大值
        //    5 , 0 -> 5
        //    -5, 0 -> 0
        // xxx, xMax - 取小值
        //    100, 80 -> 80
        //    50,  80 -> 50
        labelPos.setX( min(max(labelPos.x(), xMin), xMax));
        labelPos.setY( min(max(labelPos.y(), yMin), yMax));

        // 将label移动到新的位置
        ui->m_block->move(labelPos);
    }
}
void  MouseDialog::mouseReleaseEvent(QMouseEvent* e)
{
    if(e->button() == Qt::LeftButton){
        m_dragging = false;
    }
}

