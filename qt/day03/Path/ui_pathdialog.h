/********************************************************************************
** Form generated from reading UI file 'pathdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PATHDIALOG_H
#define UI_PATHDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>

QT_BEGIN_NAMESPACE

class Ui_PathDialog
{
public:

    void setupUi(QDialog *PathDialog)
    {
        if (PathDialog->objectName().isEmpty())
            PathDialog->setObjectName(QString::fromUtf8("PathDialog"));
        PathDialog->resize(839, 637);
        QPalette palette;
        QBrush brush(QColor(255, 255, 255, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Base, brush);
        palette.setBrush(QPalette::Active, QPalette::Window, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush);
        PathDialog->setPalette(palette);

        retranslateUi(PathDialog);

        QMetaObject::connectSlotsByName(PathDialog);
    } // setupUi

    void retranslateUi(QDialog *PathDialog)
    {
        PathDialog->setWindowTitle(QApplication::translate("PathDialog", "\350\267\257\345\276\204", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PathDialog: public Ui_PathDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PATHDIALOG_H
