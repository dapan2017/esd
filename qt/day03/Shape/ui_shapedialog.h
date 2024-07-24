/********************************************************************************
** Form generated from reading UI file 'shapedialog.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SHAPEDIALOG_H
#define UI_SHAPEDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>

QT_BEGIN_NAMESPACE

class Ui_ShapeDialog
{
public:

    void setupUi(QDialog *ShapeDialog)
    {
        if (ShapeDialog->objectName().isEmpty())
            ShapeDialog->setObjectName(QString::fromUtf8("ShapeDialog"));
        ShapeDialog->resize(887, 688);
        QPalette palette;
        QBrush brush(QColor(255, 255, 255, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Base, brush);
        palette.setBrush(QPalette::Active, QPalette::Window, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush);
        ShapeDialog->setPalette(palette);

        retranslateUi(ShapeDialog);

        QMetaObject::connectSlotsByName(ShapeDialog);
    } // setupUi

    void retranslateUi(QDialog *ShapeDialog)
    {
        ShapeDialog->setWindowTitle(QApplication::translate("ShapeDialog", "\345\233\276\345\275\242", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ShapeDialog: public Ui_ShapeDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SHAPEDIALOG_H
