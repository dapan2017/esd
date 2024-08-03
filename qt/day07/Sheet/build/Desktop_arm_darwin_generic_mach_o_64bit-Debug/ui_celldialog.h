/********************************************************************************
** Form generated from reading UI file 'celldialog.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CELLDIALOG_H
#define UI_CELLDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_CellDialog
{
public:
    QHBoxLayout *horizontalLayout;
    QGridLayout *gridLayout;
    QLabel *label;
    QSpinBox *m_spinRow;
    QLabel *label_2;
    QSpinBox *m_spinCol;
    QLabel *label_3;
    QLineEdit *m_editContent;
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer;
    QPushButton *m_btnUpdate;
    QPushButton *m_btnClose;
    QSpacerItem *verticalSpacer_2;

    void setupUi(QDialog *CellDialog)
    {
        if (CellDialog->objectName().isEmpty())
            CellDialog->setObjectName("CellDialog");
        CellDialog->resize(324, 146);
        horizontalLayout = new QHBoxLayout(CellDialog);
        horizontalLayout->setObjectName("horizontalLayout");
        gridLayout = new QGridLayout();
        gridLayout->setObjectName("gridLayout");
        label = new QLabel(CellDialog);
        label->setObjectName("label");

        gridLayout->addWidget(label, 0, 0, 1, 1);

        m_spinRow = new QSpinBox(CellDialog);
        m_spinRow->setObjectName("m_spinRow");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(m_spinRow->sizePolicy().hasHeightForWidth());
        m_spinRow->setSizePolicy(sizePolicy);
        m_spinRow->setMinimum(1);
        m_spinRow->setMaximum(100);

        gridLayout->addWidget(m_spinRow, 0, 1, 1, 1);

        label_2 = new QLabel(CellDialog);
        label_2->setObjectName("label_2");

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        m_spinCol = new QSpinBox(CellDialog);
        m_spinCol->setObjectName("m_spinCol");
        sizePolicy.setHeightForWidth(m_spinCol->sizePolicy().hasHeightForWidth());
        m_spinCol->setSizePolicy(sizePolicy);
        m_spinCol->setMinimum(1);
        m_spinCol->setMaximum(100);

        gridLayout->addWidget(m_spinCol, 1, 1, 1, 1);

        label_3 = new QLabel(CellDialog);
        label_3->setObjectName("label_3");

        gridLayout->addWidget(label_3, 2, 0, 1, 1);

        m_editContent = new QLineEdit(CellDialog);
        m_editContent->setObjectName("m_editContent");

        gridLayout->addWidget(m_editContent, 2, 1, 1, 1);


        horizontalLayout->addLayout(gridLayout);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        m_btnUpdate = new QPushButton(CellDialog);
        m_btnUpdate->setObjectName("m_btnUpdate");

        verticalLayout->addWidget(m_btnUpdate);

        m_btnClose = new QPushButton(CellDialog);
        m_btnClose->setObjectName("m_btnClose");

        verticalLayout->addWidget(m_btnClose);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);


        horizontalLayout->addLayout(verticalLayout);


        retranslateUi(CellDialog);
        QObject::connect(m_btnClose, &QPushButton::clicked, CellDialog, qOverload<>(&QDialog::close));

        m_btnUpdate->setDefault(true);


        QMetaObject::connectSlotsByName(CellDialog);
    } // setupUi

    void retranslateUi(QDialog *CellDialog)
    {
        CellDialog->setWindowTitle(QCoreApplication::translate("CellDialog", "\345\215\225\345\205\203", nullptr));
        label->setText(QCoreApplication::translate("CellDialog", "\350\241\214\345\217\267:", nullptr));
        label_2->setText(QCoreApplication::translate("CellDialog", "\345\210\227\345\217\267:", nullptr));
        label_3->setText(QCoreApplication::translate("CellDialog", "\345\206\205\345\256\271:", nullptr));
        m_btnUpdate->setText(QCoreApplication::translate("CellDialog", "\346\233\264\346\226\260", nullptr));
        m_btnClose->setText(QCoreApplication::translate("CellDialog", "\345\205\263\351\227\255", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CellDialog: public Ui_CellDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CELLDIALOG_H
