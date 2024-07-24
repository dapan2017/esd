#include <algorithm>
using namespace std;

#include <QKeyEvent>

#include "keyboarddialog.h"
#include "ui_keyboarddialog.h"

KeyboardDialog::KeyboardDialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::KeyboardDialog)
{
    ui->setupUi(this);
}

KeyboardDialog::~KeyboardDialog()
{
    delete ui;
}

void KeyboardDialog::keyPressEvent(QKeyEvent* e)
{
    QPoint blockPos = ui->m_block->pos();
    switch (e->key())
    {
        case Qt::Key_Left:
            blockPos.setX(blockPos.x() - 10);
            break;

        case Qt::Key_Right:
            blockPos.setX(blockPos.x() + 10);
            break;

        case Qt::Key_Up:
            blockPos.setY(blockPos.y() - 10);
            break;

        case Qt::Key_Down:
            blockPos.setY(blockPos.y() + 10);
            break;
    }

    QSize windowSize = size();
    QSize blockSize = ui->m_block->size();

    int xMin = 0, xMax = windowSize.width() - blockSize.width();
    int yMin = 0, yMax = windowSize.height() - blockSize.height();

    blockPos.setX(min(max(blockPos.x(), xMin), xMax));
    blockPos.setY(min(max(blockPos.y(), yMin), yMax));

    ui->m_block->move(blockPos);
}
