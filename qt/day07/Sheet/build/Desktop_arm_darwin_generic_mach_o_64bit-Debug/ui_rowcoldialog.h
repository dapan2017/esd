/********************************************************************************
** Form generated from reading UI file 'rowcoldialog.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ROWCOLDIALOG_H
#define UI_ROWCOLDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_RowColDialog
{
public:
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer;
    QGridLayout *gridLayout;
    QLabel *label;
    QSpinBox *m_spinRow;
    QPushButton *m_btnOk;
    QLabel *label_2;
    QSpinBox *m_spinCol;
    QPushButton *m_btnCancel;
    QSpacerItem *verticalSpacer_2;

    void setupUi(QDialog *RowColDialog)
    {
        if (RowColDialog->objectName().isEmpty())
            RowColDialog->setObjectName("RowColDialog");
        RowColDialog->resize(300, 193);
        verticalLayout = new QVBoxLayout(RowColDialog);
        verticalLayout->setObjectName("verticalLayout");
        verticalSpacer = new QSpacerItem(20, 52, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName("gridLayout");
        label = new QLabel(RowColDialog);
        label->setObjectName("label");

        gridLayout->addWidget(label, 0, 0, 1, 1);

        m_spinRow = new QSpinBox(RowColDialog);
        m_spinRow->setObjectName("m_spinRow");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(m_spinRow->sizePolicy().hasHeightForWidth());
        m_spinRow->setSizePolicy(sizePolicy);
        m_spinRow->setMinimum(1);
        m_spinRow->setMaximum(100);

        gridLayout->addWidget(m_spinRow, 0, 1, 1, 1);

        m_btnOk = new QPushButton(RowColDialog);
        m_btnOk->setObjectName("m_btnOk");

        gridLayout->addWidget(m_btnOk, 0, 2, 1, 1);

        label_2 = new QLabel(RowColDialog);
        label_2->setObjectName("label_2");

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        m_spinCol = new QSpinBox(RowColDialog);
        m_spinCol->setObjectName("m_spinCol");
        sizePolicy.setHeightForWidth(m_spinCol->sizePolicy().hasHeightForWidth());
        m_spinCol->setSizePolicy(sizePolicy);
        m_spinCol->setMinimum(1);
        m_spinCol->setMaximum(100);

        gridLayout->addWidget(m_spinCol, 1, 1, 1, 1);

        m_btnCancel = new QPushButton(RowColDialog);
        m_btnCancel->setObjectName("m_btnCancel");

        gridLayout->addWidget(m_btnCancel, 1, 2, 1, 1);


        verticalLayout->addLayout(gridLayout);

        verticalSpacer_2 = new QSpacerItem(20, 51, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);


        retranslateUi(RowColDialog);
        QObject::connect(m_btnOk, &QPushButton::clicked, RowColDialog, qOverload<>(&QDialog::accept));
        QObject::connect(m_btnCancel, &QPushButton::clicked, RowColDialog, qOverload<>(&QDialog::reject));

        m_btnOk->setDefault(true);


        QMetaObject::connectSlotsByName(RowColDialog);
    } // setupUi

    void retranslateUi(QDialog *RowColDialog)
    {
        RowColDialog->setWindowTitle(QCoreApplication::translate("RowColDialog", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("RowColDialog", "\350\241\214\346\225\260:", nullptr));
        m_btnOk->setText(QCoreApplication::translate("RowColDialog", "\347\241\256\345\256\232", nullptr));
        label_2->setText(QCoreApplication::translate("RowColDialog", "\345\210\227\346\225\260:", nullptr));
        m_btnCancel->setText(QCoreApplication::translate("RowColDialog", "\345\217\226\346\266\210", nullptr));
    } // retranslateUi

};

namespace Ui {
    class RowColDialog: public Ui_RowColDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ROWCOLDIALOG_H
