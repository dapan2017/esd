/********************************************************************************
** Form generated from reading UI file 'headerdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HEADERDIALOG_H
#define UI_HEADERDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QListView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_HeaderDialog
{
public:
    QVBoxLayout *verticalLayout;
    QListView *m_list;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *m_btnOk;
    QPushButton *m_btnCancel;
    QSpacerItem *horizontalSpacer_2;

    void setupUi(QDialog *HeaderDialog)
    {
        if (HeaderDialog->objectName().isEmpty())
            HeaderDialog->setObjectName("HeaderDialog");
        HeaderDialog->resize(291, 329);
        verticalLayout = new QVBoxLayout(HeaderDialog);
        verticalLayout->setObjectName("verticalLayout");
        m_list = new QListView(HeaderDialog);
        m_list->setObjectName("m_list");
        m_list->setFrameShape(QFrame::WinPanel);

        verticalLayout->addWidget(m_list);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        m_btnOk = new QPushButton(HeaderDialog);
        m_btnOk->setObjectName("m_btnOk");

        horizontalLayout->addWidget(m_btnOk);

        m_btnCancel = new QPushButton(HeaderDialog);
        m_btnCancel->setObjectName("m_btnCancel");

        horizontalLayout->addWidget(m_btnCancel);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(HeaderDialog);
        QObject::connect(m_btnOk, &QPushButton::clicked, HeaderDialog, qOverload<>(&QDialog::accept));
        QObject::connect(m_btnCancel, &QPushButton::clicked, HeaderDialog, qOverload<>(&QDialog::reject));

        m_btnOk->setDefault(true);


        QMetaObject::connectSlotsByName(HeaderDialog);
    } // setupUi

    void retranslateUi(QDialog *HeaderDialog)
    {
        HeaderDialog->setWindowTitle(QCoreApplication::translate("HeaderDialog", "\350\241\250\345\244\264", nullptr));
        m_btnOk->setText(QCoreApplication::translate("HeaderDialog", "\347\241\256\345\256\232", nullptr));
        m_btnCancel->setText(QCoreApplication::translate("HeaderDialog", "\345\217\226\346\266\210", nullptr));
    } // retranslateUi

};

namespace Ui {
    class HeaderDialog: public Ui_HeaderDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HEADERDIALOG_H
