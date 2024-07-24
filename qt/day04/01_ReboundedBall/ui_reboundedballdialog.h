/********************************************************************************
** Form generated from reading UI file 'reboundedballdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REBOUNDEDBALLDIALOG_H
#define UI_REBOUNDEDBALLDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>

QT_BEGIN_NAMESPACE

class Ui_ReboundedBallDialog
{
public:

    void setupUi(QDialog *ReboundedBallDialog)
    {
        if (ReboundedBallDialog->objectName().isEmpty())
            ReboundedBallDialog->setObjectName(QString::fromUtf8("ReboundedBallDialog"));
        ReboundedBallDialog->resize(857, 710);
        ReboundedBallDialog->setStyleSheet(QString::fromUtf8("background-image: url(:/images/b.jpg);"));

        retranslateUi(ReboundedBallDialog);

        QMetaObject::connectSlotsByName(ReboundedBallDialog);
    } // setupUi

    void retranslateUi(QDialog *ReboundedBallDialog)
    {
        ReboundedBallDialog->setWindowTitle(QApplication::translate("ReboundedBallDialog", "\345\217\215\345\274\271\345\260\217\347\220\203", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ReboundedBallDialog: public Ui_ReboundedBallDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REBOUNDEDBALLDIALOG_H
