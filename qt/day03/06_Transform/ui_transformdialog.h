/********************************************************************************
** Form generated from reading UI file 'transformdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TRANSFORMDIALOG_H
#define UI_TRANSFORMDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>

QT_BEGIN_NAMESPACE

class Ui_TransformDialog
{
public:

    void setupUi(QDialog *TransformDialog)
    {
        if (TransformDialog->objectName().isEmpty())
            TransformDialog->setObjectName(QString::fromUtf8("TransformDialog"));
        TransformDialog->resize(800, 600);

        retranslateUi(TransformDialog);

        QMetaObject::connectSlotsByName(TransformDialog);
    } // setupUi

    void retranslateUi(QDialog *TransformDialog)
    {
        TransformDialog->setWindowTitle(QApplication::translate("TransformDialog", "TransformDialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TransformDialog: public Ui_TransformDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TRANSFORMDIALOG_H
