#ifndef PICTURESDIALOG_H
#define PICTURESDIALOG_H

#include <QDialog>

QT_BEGIN_NAMESPACE
namespace Ui { class PicturesDialog; }
QT_END_NAMESPACE

class PicturesDialog : public QDialog
{
    Q_OBJECT

public:
    PicturesDialog(QWidget *parent = nullptr);
    ~PicturesDialog();

protected:
    // 绘图事件处理函数
    void paintEvent(QPaintEvent*);

protected:
    void enabledButton(void);

private slots:
    void on_m_btnPrev_clicked();

    void on_m_btnNext_clicked();

private:
    Ui::PicturesDialog *ui;
    int m_imageIndex; // 图片的编号
};
#endif // PICTURESDIALOG_H
