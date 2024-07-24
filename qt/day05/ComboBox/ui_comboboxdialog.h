/********************************************************************************
** Form generated from reading UI file 'comboboxdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COMBOBOXDIALOG_H
#define UI_COMBOBOXDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_ComboBoxDialog
{
public:
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_3;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QPushButton *m_btnInit;
    QPushButton *m_btnClear;
    QCheckBox *m_checkEditable;
    QComboBox *m_comboSimple;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout_2;
    QPushButton *m_btnAdd;
    QComboBox *m_comboUserData;
    QGroupBox *groupBox_3;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *m_btnAppend;
    QPushButton *m_btnErase;
    QCheckBox *m_checkReadOnly;
    QPlainTextEdit *m_plainTextEdit;

    void setupUi(QDialog *ComboBoxDialog)
    {
        if (ComboBoxDialog->objectName().isEmpty())
            ComboBoxDialog->setObjectName(QString::fromUtf8("ComboBoxDialog"));
        ComboBoxDialog->resize(564, 584);
        verticalLayout_4 = new QVBoxLayout(ComboBoxDialog);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        groupBox = new QGroupBox(ComboBoxDialog);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        m_btnInit = new QPushButton(groupBox);
        m_btnInit->setObjectName(QString::fromUtf8("m_btnInit"));

        horizontalLayout->addWidget(m_btnInit);

        m_btnClear = new QPushButton(groupBox);
        m_btnClear->setObjectName(QString::fromUtf8("m_btnClear"));

        horizontalLayout->addWidget(m_btnClear);

        m_checkEditable = new QCheckBox(groupBox);
        m_checkEditable->setObjectName(QString::fromUtf8("m_checkEditable"));

        horizontalLayout->addWidget(m_checkEditable);


        verticalLayout->addLayout(horizontalLayout);

        m_comboSimple = new QComboBox(groupBox);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/aim.ico"), QSize(), QIcon::Normal, QIcon::Off);
        m_comboSimple->addItem(icon, QString());
        m_comboSimple->addItem(icon, QString());
        m_comboSimple->addItem(icon, QString());
        m_comboSimple->setObjectName(QString::fromUtf8("m_comboSimple"));

        verticalLayout->addWidget(m_comboSimple);


        horizontalLayout_3->addWidget(groupBox);

        groupBox_2 = new QGroupBox(ComboBoxDialog);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        verticalLayout_2 = new QVBoxLayout(groupBox_2);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        m_btnAdd = new QPushButton(groupBox_2);
        m_btnAdd->setObjectName(QString::fromUtf8("m_btnAdd"));

        verticalLayout_2->addWidget(m_btnAdd);

        m_comboUserData = new QComboBox(groupBox_2);
        m_comboUserData->setObjectName(QString::fromUtf8("m_comboUserData"));

        verticalLayout_2->addWidget(m_comboUserData);


        horizontalLayout_3->addWidget(groupBox_2);


        verticalLayout_4->addLayout(horizontalLayout_3);

        groupBox_3 = new QGroupBox(ComboBoxDialog);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        verticalLayout_3 = new QVBoxLayout(groupBox_3);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        m_btnAppend = new QPushButton(groupBox_3);
        m_btnAppend->setObjectName(QString::fromUtf8("m_btnAppend"));

        horizontalLayout_2->addWidget(m_btnAppend);

        m_btnErase = new QPushButton(groupBox_3);
        m_btnErase->setObjectName(QString::fromUtf8("m_btnErase"));

        horizontalLayout_2->addWidget(m_btnErase);

        m_checkReadOnly = new QCheckBox(groupBox_3);
        m_checkReadOnly->setObjectName(QString::fromUtf8("m_checkReadOnly"));

        horizontalLayout_2->addWidget(m_checkReadOnly);


        verticalLayout_3->addLayout(horizontalLayout_2);

        m_plainTextEdit = new QPlainTextEdit(groupBox_3);
        m_plainTextEdit->setObjectName(QString::fromUtf8("m_plainTextEdit"));

        verticalLayout_3->addWidget(m_plainTextEdit);


        verticalLayout_4->addWidget(groupBox_3);


        retranslateUi(ComboBoxDialog);

        QMetaObject::connectSlotsByName(ComboBoxDialog);
    } // setupUi

    void retranslateUi(QDialog *ComboBoxDialog)
    {
        ComboBoxDialog->setWindowTitle(QApplication::translate("ComboBoxDialog", "\347\273\204\345\220\210\346\241\206\345\222\214\346\226\207\346\234\254\347\274\226\350\276\221\346\241\206", nullptr));
        groupBox->setTitle(QApplication::translate("ComboBoxDialog", "\347\256\200\345\215\225\345\210\206\347\273\204\346\241\206", nullptr));
        m_btnInit->setText(QApplication::translate("ComboBoxDialog", "\345\210\235\345\247\213\345\214\226", nullptr));
        m_btnClear->setText(QApplication::translate("ComboBoxDialog", "\346\270\205\347\251\272", nullptr));
        m_checkEditable->setText(QApplication::translate("ComboBoxDialog", "\345\217\257\347\274\226\350\276\221", nullptr));
        m_comboSimple->setItemText(0, QApplication::translate("ComboBoxDialog", "\346\226\260\345\273\272\350\241\250\351\241\2711", nullptr));
        m_comboSimple->setItemText(1, QApplication::translate("ComboBoxDialog", "\346\210\221\346\230\257\345\260\217\347\245\236", nullptr));
        m_comboSimple->setItemText(2, QApplication::translate("ComboBoxDialog", "\346\210\221\346\230\257\345\244\247\347\245\236", nullptr));

        groupBox_2->setTitle(QApplication::translate("ComboBoxDialog", "\347\224\250\346\210\267\346\225\260\346\215\256\345\210\206\347\273\204\346\241\206", nullptr));
        m_btnAdd->setText(QApplication::translate("ComboBoxDialog", "\346\267\273\345\212\240", nullptr));
        groupBox_3->setTitle(QApplication::translate("ComboBoxDialog", "\346\226\207\346\234\254\347\274\226\350\276\221\345\210\206\347\273\204\346\241\206", nullptr));
        m_btnAppend->setText(QApplication::translate("ComboBoxDialog", "\350\277\275\345\212\240", nullptr));
        m_btnErase->setText(QApplication::translate("ComboBoxDialog", "\346\223\246\351\231\244", nullptr));
        m_checkReadOnly->setText(QApplication::translate("ComboBoxDialog", "\345\217\252\350\257\273", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ComboBoxDialog: public Ui_ComboBoxDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COMBOBOXDIALOG_H
