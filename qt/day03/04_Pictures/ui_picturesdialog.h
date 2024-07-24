/********************************************************************************
** Form generated from reading UI file 'picturesdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PICTURESDIALOG_H
#define UI_PICTURESDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_PicturesDialog
{
public:
    QVBoxLayout *verticalLayout;
    QFrame *m_frmImage;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *m_btnPrev;
    QPushButton *m_btnNext;
    QSpacerItem *horizontalSpacer_2;

    void setupUi(QDialog *PicturesDialog)
    {
        if (PicturesDialog->objectName().isEmpty())
            PicturesDialog->setObjectName(QString::fromUtf8("PicturesDialog"));
        PicturesDialog->resize(434, 570);
        verticalLayout = new QVBoxLayout(PicturesDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        m_frmImage = new QFrame(PicturesDialog);
        m_frmImage->setObjectName(QString::fromUtf8("m_frmImage"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(m_frmImage->sizePolicy().hasHeightForWidth());
        m_frmImage->setSizePolicy(sizePolicy);
        m_frmImage->setFrameShape(QFrame::Box);
        m_frmImage->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(m_frmImage);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        m_btnPrev = new QPushButton(PicturesDialog);
        m_btnPrev->setObjectName(QString::fromUtf8("m_btnPrev"));

        horizontalLayout->addWidget(m_btnPrev);

        m_btnNext = new QPushButton(PicturesDialog);
        m_btnNext->setObjectName(QString::fromUtf8("m_btnNext"));

        horizontalLayout->addWidget(m_btnNext);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(PicturesDialog);

        QMetaObject::connectSlotsByName(PicturesDialog);
    } // setupUi

    void retranslateUi(QDialog *PicturesDialog)
    {
        PicturesDialog->setWindowTitle(QApplication::translate("PicturesDialog", "PicturesDialog", nullptr));
        m_btnPrev->setText(QApplication::translate("PicturesDialog", "\344\270\212\344\270\200\345\274\240", nullptr));
        m_btnNext->setText(QApplication::translate("PicturesDialog", "\344\270\213\344\270\200\345\274\240", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PicturesDialog: public Ui_PicturesDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PICTURESDIALOG_H
