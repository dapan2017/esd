/********************************************************************************
** Form generated from reading UI file 'headerdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
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
            HeaderDialog->setObjectName(QString::fromUtf8("HeaderDialog"));
        HeaderDialog->resize(291, 329);
        verticalLayout = new QVBoxLayout(HeaderDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        m_list = new QListView(HeaderDialog);
        m_list->setObjectName(QString::fromUtf8("m_list"));
        m_list->setFrameShape(QFrame::WinPanel);

        verticalLayout->addWidget(m_list);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        m_btnOk = new QPushButton(HeaderDialog);
        m_btnOk->setObjectName(QString::fromUtf8("m_btnOk"));

        horizontalLayout->addWidget(m_btnOk);

        m_btnCancel = new QPushButton(HeaderDialog);
        m_btnCancel->setObjectName(QString::fromUtf8("m_btnCancel"));

        horizontalLayout->addWidget(m_btnCancel);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(HeaderDialog);
        QObject::connect(m_btnOk, SIGNAL(clicked()), HeaderDialog, SLOT(accept()));
        QObject::connect(m_btnCancel, SIGNAL(clicked()), HeaderDialog, SLOT(reject()));

        m_btnOk->setDefault(true);


        QMetaObject::connectSlotsByName(HeaderDialog);
    } // setupUi

    void retranslateUi(QDialog *HeaderDialog)
    {
        HeaderDialog->setWindowTitle(QApplication::translate("HeaderDialog", "\350\241\250\345\244\264", nullptr));
        m_btnOk->setText(QApplication::translate("HeaderDialog", "\347\241\256\345\256\232", nullptr));
        m_btnCancel->setText(QApplication::translate("HeaderDialog", "\345\217\226\346\266\210", nullptr));
    } // retranslateUi

};

namespace Ui {
    class HeaderDialog: public Ui_HeaderDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HEADERDIALOG_H
