#include "picturesdialog.h"
#include "ui_picturesdialog.h"

#include <QPainter>

PicturesDialog::PicturesDialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::PicturesDialog)
    , m_imageIndex(0)
{
    ui->setupUi(this);
    enabledButton();
}

PicturesDialog::~PicturesDialog()
{
    delete ui;
}

// 绘图事件处理函数
// 从资源中获取一张图片贴到QFrame画布中
// 1.构建一个画家类
// 2.将图片绘制到QFrame区域中
// 2.1.图片对象
// 2.2.QFrame区域??
void PicturesDialog::paintEvent(QPaintEvent*)
{
    QPainter painter(this);

    // 1.构建图片对象
    //QImage image(":/images/0.jpg");
    QImage image(":/images/" + QString::number(m_imageIndex)
                    + ".jpg");
    // 2.获取绘制区域
    QRect frameRect = ui->m_frmImage->frameRect();
    frameRect.translate(ui->m_frmImage->pos());

    // 将图片显示到画布中
    painter.drawImage(frameRect, image);
}

// 上一张按钮槽函数
void PicturesDialog::on_m_btnPrev_clicked()
{
    --m_imageIndex;

    enabledButton();
    update();
}

// 下一张按钮槽函数
void PicturesDialog::on_m_btnNext_clicked()
{
    ++m_imageIndex;
    enabledButton();
    update();
}

void PicturesDialog::enabledButton(void)
{
    // m_imageIndex == 7
    ui->m_btnPrev->setEnabled(m_imageIndex != 0);
    ui->m_btnNext->setEnabled(m_imageIndex != 7);
}
