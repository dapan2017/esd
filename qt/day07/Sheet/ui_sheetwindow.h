/********************************************************************************
** Form generated from reading UI file 'sheetwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SHEETWINDOW_H
#define UI_SHEETWINDOW_H

#include <QtCore/QVariant>
#include <Qtgui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SheetWindow
{
public:
    QAction *m_actRowcol;
    QAction *m_actHeader;
    QAction *m_actCell;
    QAction *m_actExit;
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout;
    QTableView *m_table;
    QStatusBar *statusbar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *SheetWindow)
    {
        if (SheetWindow->objectName().isEmpty())
            SheetWindow->setObjectName(QString::fromUtf8("SheetWindow"));
        SheetWindow->resize(673, 524);
        m_actRowcol = new QAction(SheetWindow);
        m_actRowcol->setObjectName(QString::fromUtf8("m_actRowcol"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/rowcol.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        m_actRowcol->setIcon(icon);
        m_actHeader = new QAction(SheetWindow);
        m_actHeader->setObjectName(QString::fromUtf8("m_actHeader"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/header.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        m_actHeader->setIcon(icon1);
        m_actCell = new QAction(SheetWindow);
        m_actCell->setObjectName(QString::fromUtf8("m_actCell"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/images/cell.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        m_actCell->setIcon(icon2);
        m_actExit = new QAction(SheetWindow);
        m_actExit->setObjectName(QString::fromUtf8("m_actExit"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/images/exit.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        m_actExit->setIcon(icon3);
        centralwidget = new QWidget(SheetWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        horizontalLayout = new QHBoxLayout(centralwidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        m_table = new QTableView(centralwidget);
        m_table->setObjectName(QString::fromUtf8("m_table"));
        m_table->setFrameShape(QFrame::WinPanel);

        horizontalLayout->addWidget(m_table);

        SheetWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(SheetWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        SheetWindow->setStatusBar(statusbar);
        toolBar = new QToolBar(SheetWindow);
        toolBar->setObjectName(QString::fromUtf8("toolBar"));
        toolBar->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        SheetWindow->addToolBar(Qt::TopToolBarArea, toolBar);

        toolBar->addAction(m_actRowcol);
        toolBar->addAction(m_actHeader);
        toolBar->addAction(m_actCell);
        toolBar->addSeparator();
        toolBar->addAction(m_actExit);

        retranslateUi(SheetWindow);
        QObject::connect(m_actExit, SIGNAL(triggered()), SheetWindow, SLOT(close()));

        QMetaObject::connectSlotsByName(SheetWindow);
    } // setupUi

    void retranslateUi(QMainWindow *SheetWindow)
    {
        SheetWindow->setWindowTitle(QApplication::translate("SheetWindow", "SheetWindow", nullptr));
        m_actRowcol->setText(QApplication::translate("SheetWindow", "\350\241\214\345\210\227", nullptr));
#ifndef QT_NO_TOOLTIP
        m_actRowcol->setToolTip(QApplication::translate("SheetWindow", "\350\241\214\345\210\227", nullptr));
#endif // QT_NO_TOOLTIP
        m_actHeader->setText(QApplication::translate("SheetWindow", "\350\241\250\345\244\264", nullptr));
#ifndef QT_NO_TOOLTIP
        m_actHeader->setToolTip(QApplication::translate("SheetWindow", "\350\241\250\345\244\264", nullptr));
#endif // QT_NO_TOOLTIP
        m_actCell->setText(QApplication::translate("SheetWindow", "\345\215\225\345\205\203`", nullptr));
#ifndef QT_NO_TOOLTIP
        m_actCell->setToolTip(QApplication::translate("SheetWindow", "\345\215\225\345\205\203", nullptr));
#endif // QT_NO_TOOLTIP
        m_actExit->setText(QApplication::translate("SheetWindow", "\351\200\200\345\207\272", nullptr));
#ifndef QT_NO_TOOLTIP
        m_actExit->setToolTip(QApplication::translate("SheetWindow", "\351\200\200\345\207\272", nullptr));
#endif // QT_NO_TOOLTIP
        toolBar->setWindowTitle(QApplication::translate("SheetWindow", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SheetWindow: public Ui_SheetWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SHEETWINDOW_H
