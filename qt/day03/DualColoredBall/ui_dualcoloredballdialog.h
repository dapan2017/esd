/********************************************************************************
** Form generated from reading UI file 'dualcoloredballdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DUALCOLOREDBALLDIALOG_H
#define UI_DUALCOLOREDBALLDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_DualColoredBallDialog
{
public:
    QHBoxLayout *horizontalLayout;
    QLabel *m_labelRed;
    QLabel *m_labelBlue;

    void setupUi(QDialog *DualColoredBallDialog)
    {
        if (DualColoredBallDialog->objectName().isEmpty())
            DualColoredBallDialog->setObjectName(QString::fromUtf8("DualColoredBallDialog"));
        DualColoredBallDialog->resize(752, 458);
        horizontalLayout = new QHBoxLayout(DualColoredBallDialog);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        m_labelRed = new QLabel(DualColoredBallDialog);
        m_labelRed->setObjectName(QString::fromUtf8("m_labelRed"));
        QPalette palette;
        QBrush brush(QColor(255, 85, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        QBrush brush1(QColor(120, 120, 120, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        m_labelRed->setPalette(palette);
        QFont font;
        font.setPointSize(60);
        m_labelRed->setFont(font);
        m_labelRed->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(m_labelRed);

        m_labelBlue = new QLabel(DualColoredBallDialog);
        m_labelBlue->setObjectName(QString::fromUtf8("m_labelBlue"));
        QPalette palette1;
        QBrush brush2(QColor(0, 0, 255, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::WindowText, brush2);
        palette1.setBrush(QPalette::Inactive, QPalette::WindowText, brush2);
        palette1.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        m_labelBlue->setPalette(palette1);
        m_labelBlue->setFont(font);
        m_labelBlue->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(m_labelBlue);


        retranslateUi(DualColoredBallDialog);

        QMetaObject::connectSlotsByName(DualColoredBallDialog);
    } // setupUi

    void retranslateUi(QDialog *DualColoredBallDialog)
    {
        DualColoredBallDialog->setWindowTitle(QApplication::translate("DualColoredBallDialog", "\345\217\214\350\211\262\347\220\203", nullptr));
        m_labelRed->setText(QApplication::translate("DualColoredBallDialog", "0", nullptr));
        m_labelBlue->setText(QApplication::translate("DualColoredBallDialog", "0", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DualColoredBallDialog: public Ui_DualColoredBallDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DUALCOLOREDBALLDIALOG_H
