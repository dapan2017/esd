/********************************************************************************
** Form generated from reading UI file 'contexdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONTEXDIALOG_H
#define UI_CONTEXDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>

QT_BEGIN_NAMESPACE

class Ui_ContexDialog
{
public:
    QAction *m_actAbout;
    QAction *m_actExit;

    void setupUi(QDialog *ContexDialog)
    {
        if (ContexDialog->objectName().isEmpty())
            ContexDialog->setObjectName("ContexDialog");
        ContexDialog->resize(800, 600);
        ContexDialog->setContextMenuPolicy(Qt::CustomContextMenu);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/AppIcon.ico"), QSize(), QIcon::Normal, QIcon::Off);
        ContexDialog->setWindowIcon(icon);
        m_actAbout = new QAction(ContexDialog);
        m_actAbout->setObjectName("m_actAbout");
        m_actAbout->setIcon(icon);
        m_actExit = new QAction(ContexDialog);
        m_actExit->setObjectName("m_actExit");
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/exit.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        m_actExit->setIcon(icon1);

        retranslateUi(ContexDialog);
        QObject::connect(m_actExit, &QAction::triggered, ContexDialog, qOverload<>(&QDialog::close));

        QMetaObject::connectSlotsByName(ContexDialog);
    } // setupUi

    void retranslateUi(QDialog *ContexDialog)
    {
        ContexDialog->setWindowTitle(QCoreApplication::translate("ContexDialog", "\345\217\263\351\224\256\350\217\234\345\215\225", nullptr));
        m_actAbout->setText(QCoreApplication::translate("ContexDialog", "\345\205\263\344\272\216...", nullptr));
#if QT_CONFIG(tooltip)
        m_actAbout->setToolTip(QCoreApplication::translate("ContexDialog", "\345\205\263\344\272\216...", nullptr));
#endif // QT_CONFIG(tooltip)
        m_actExit->setText(QCoreApplication::translate("ContexDialog", "\351\200\200\345\207\272", nullptr));
#if QT_CONFIG(tooltip)
        m_actExit->setToolTip(QCoreApplication::translate("ContexDialog", "\351\200\200\345\207\272", nullptr));
#endif // QT_CONFIG(tooltip)
    } // retranslateUi

};

namespace Ui {
    class ContexDialog: public Ui_ContexDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONTEXDIALOG_H