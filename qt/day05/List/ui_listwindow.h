/********************************************************************************
** Form generated from reading UI file 'listwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LISTWINDOW_H
#define UI_LISTWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QToolBox>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ListWindow
{
public:
    QAction *m_actInit;
    QAction *m_actClear;
    QAction *m_actAppend;
    QAction *m_actInsert;
    QAction *m_actDelete;
    QAction *m_actCheckAll;
    QAction *m_actCheckNone;
    QAction *m_actCheckInverse;
    QAction *m_actCheck;
    QAction *m_actExit;
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout_2;
    QSplitter *splitter;
    QToolBox *toolBox;
    QWidget *page;
    QVBoxLayout *verticalLayout;
    QToolButton *m_btnInit;
    QToolButton *m_btnClear;
    QToolButton *m_btnAppend;
    QToolButton *m_btnInsert;
    QToolButton *m_btnDelete;
    QWidget *page_2;
    QWidget *page_3;
    QTabWidget *tabWidget;
    QWidget *tab;
    QVBoxLayout *verticalLayout_2;
    QListWidget *m_list;
    QHBoxLayout *horizontalLayout;
    QToolButton *m_btnCheckAll;
    QToolButton *m_btnCheckNone;
    QToolButton *m_btnCheckInverse;
    QToolButton *m_btnCheck;
    QCheckBox *m_checkEditable;
    QPlainTextEdit *m_editChanged;
    QWidget *tab_2;
    QWidget *tab_3;
    QStatusBar *statusbar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *ListWindow)
    {
        if (ListWindow->objectName().isEmpty())
            ListWindow->setObjectName(QString::fromUtf8("ListWindow"));
        ListWindow->resize(1086, 631);
        m_actInit = new QAction(ListWindow);
        m_actInit->setObjectName(QString::fromUtf8("m_actInit"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/init.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        m_actInit->setIcon(icon);
        m_actClear = new QAction(ListWindow);
        m_actClear->setObjectName(QString::fromUtf8("m_actClear"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/clear.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        m_actClear->setIcon(icon1);
        m_actAppend = new QAction(ListWindow);
        m_actAppend->setObjectName(QString::fromUtf8("m_actAppend"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/images/append.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        m_actAppend->setIcon(icon2);
        m_actInsert = new QAction(ListWindow);
        m_actInsert->setObjectName(QString::fromUtf8("m_actInsert"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/images/insert.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        m_actInsert->setIcon(icon3);
        m_actDelete = new QAction(ListWindow);
        m_actDelete->setObjectName(QString::fromUtf8("m_actDelete"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/images/delete.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        m_actDelete->setIcon(icon4);
        m_actCheckAll = new QAction(ListWindow);
        m_actCheckAll->setObjectName(QString::fromUtf8("m_actCheckAll"));
        m_actCheckNone = new QAction(ListWindow);
        m_actCheckNone->setObjectName(QString::fromUtf8("m_actCheckNone"));
        m_actCheckInverse = new QAction(ListWindow);
        m_actCheckInverse->setObjectName(QString::fromUtf8("m_actCheckInverse"));
        m_actCheck = new QAction(ListWindow);
        m_actCheck->setObjectName(QString::fromUtf8("m_actCheck"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/images/item.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        m_actCheck->setIcon(icon5);
        m_actExit = new QAction(ListWindow);
        m_actExit->setObjectName(QString::fromUtf8("m_actExit"));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/images/exit.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        m_actExit->setIcon(icon6);
        centralwidget = new QWidget(ListWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        horizontalLayout_2 = new QHBoxLayout(centralwidget);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        splitter = new QSplitter(centralwidget);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        splitter->setOrientation(Qt::Horizontal);
        toolBox = new QToolBox(splitter);
        toolBox->setObjectName(QString::fromUtf8("toolBox"));
        page = new QWidget();
        page->setObjectName(QString::fromUtf8("page"));
        page->setGeometry(QRect(0, 0, 210, 451));
        verticalLayout = new QVBoxLayout(page);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        m_btnInit = new QToolButton(page);
        m_btnInit->setObjectName(QString::fromUtf8("m_btnInit"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(m_btnInit->sizePolicy().hasHeightForWidth());
        m_btnInit->setSizePolicy(sizePolicy);
        m_btnInit->setToolButtonStyle(Qt::ToolButtonTextOnly);

        verticalLayout->addWidget(m_btnInit);

        m_btnClear = new QToolButton(page);
        m_btnClear->setObjectName(QString::fromUtf8("m_btnClear"));
        sizePolicy.setHeightForWidth(m_btnClear->sizePolicy().hasHeightForWidth());
        m_btnClear->setSizePolicy(sizePolicy);
        m_btnClear->setToolButtonStyle(Qt::ToolButtonTextOnly);

        verticalLayout->addWidget(m_btnClear);

        m_btnAppend = new QToolButton(page);
        m_btnAppend->setObjectName(QString::fromUtf8("m_btnAppend"));
        sizePolicy.setHeightForWidth(m_btnAppend->sizePolicy().hasHeightForWidth());
        m_btnAppend->setSizePolicy(sizePolicy);
        m_btnAppend->setToolButtonStyle(Qt::ToolButtonTextOnly);

        verticalLayout->addWidget(m_btnAppend);

        m_btnInsert = new QToolButton(page);
        m_btnInsert->setObjectName(QString::fromUtf8("m_btnInsert"));
        sizePolicy.setHeightForWidth(m_btnInsert->sizePolicy().hasHeightForWidth());
        m_btnInsert->setSizePolicy(sizePolicy);
        m_btnInsert->setToolButtonStyle(Qt::ToolButtonTextOnly);

        verticalLayout->addWidget(m_btnInsert);

        m_btnDelete = new QToolButton(page);
        m_btnDelete->setObjectName(QString::fromUtf8("m_btnDelete"));
        sizePolicy.setHeightForWidth(m_btnDelete->sizePolicy().hasHeightForWidth());
        m_btnDelete->setSizePolicy(sizePolicy);
        m_btnDelete->setToolButtonStyle(Qt::ToolButtonTextOnly);

        verticalLayout->addWidget(m_btnDelete);

        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/images/page1.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        toolBox->addItem(page, icon7, QString::fromUtf8("\347\254\254\344\270\200\351\241\265"));
        page_2 = new QWidget();
        page_2->setObjectName(QString::fromUtf8("page_2"));
        page_2->setGeometry(QRect(0, 0, 210, 451));
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/images/page2.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        toolBox->addItem(page_2, icon8, QString::fromUtf8("\347\254\254\344\272\214\351\241\265"));
        page_3 = new QWidget();
        page_3->setObjectName(QString::fromUtf8("page_3"));
        page_3->setGeometry(QRect(0, 0, 210, 451));
        QIcon icon9;
        icon9.addFile(QString::fromUtf8(":/images/page3.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        toolBox->addItem(page_3, icon9, QString::fromUtf8("\347\254\254\344\270\211\351\241\265"));
        splitter->addWidget(toolBox);
        tabWidget = new QTabWidget(splitter);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        verticalLayout_2 = new QVBoxLayout(tab);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        m_list = new QListWidget(tab);
        m_list->setObjectName(QString::fromUtf8("m_list"));
        m_list->setContextMenuPolicy(Qt::CustomContextMenu);

        verticalLayout_2->addWidget(m_list);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        m_btnCheckAll = new QToolButton(tab);
        m_btnCheckAll->setObjectName(QString::fromUtf8("m_btnCheckAll"));
        sizePolicy.setHeightForWidth(m_btnCheckAll->sizePolicy().hasHeightForWidth());
        m_btnCheckAll->setSizePolicy(sizePolicy);
        m_btnCheckAll->setToolButtonStyle(Qt::ToolButtonTextOnly);

        horizontalLayout->addWidget(m_btnCheckAll);

        m_btnCheckNone = new QToolButton(tab);
        m_btnCheckNone->setObjectName(QString::fromUtf8("m_btnCheckNone"));
        sizePolicy.setHeightForWidth(m_btnCheckNone->sizePolicy().hasHeightForWidth());
        m_btnCheckNone->setSizePolicy(sizePolicy);
        m_btnCheckNone->setToolButtonStyle(Qt::ToolButtonTextOnly);

        horizontalLayout->addWidget(m_btnCheckNone);

        m_btnCheckInverse = new QToolButton(tab);
        m_btnCheckInverse->setObjectName(QString::fromUtf8("m_btnCheckInverse"));
        sizePolicy.setHeightForWidth(m_btnCheckInverse->sizePolicy().hasHeightForWidth());
        m_btnCheckInverse->setSizePolicy(sizePolicy);
        m_btnCheckInverse->setToolButtonStyle(Qt::ToolButtonTextOnly);

        horizontalLayout->addWidget(m_btnCheckInverse);

        m_btnCheck = new QToolButton(tab);
        m_btnCheck->setObjectName(QString::fromUtf8("m_btnCheck"));
        sizePolicy.setHeightForWidth(m_btnCheck->sizePolicy().hasHeightForWidth());
        m_btnCheck->setSizePolicy(sizePolicy);
        m_btnCheck->setPopupMode(QToolButton::MenuButtonPopup);
        m_btnCheck->setToolButtonStyle(Qt::ToolButtonTextOnly);

        horizontalLayout->addWidget(m_btnCheck);

        m_checkEditable = new QCheckBox(tab);
        m_checkEditable->setObjectName(QString::fromUtf8("m_checkEditable"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(m_checkEditable->sizePolicy().hasHeightForWidth());
        m_checkEditable->setSizePolicy(sizePolicy1);

        horizontalLayout->addWidget(m_checkEditable);


        verticalLayout_2->addLayout(horizontalLayout);

        m_editChanged = new QPlainTextEdit(tab);
        m_editChanged->setObjectName(QString::fromUtf8("m_editChanged"));
        m_editChanged->setReadOnly(true);

        verticalLayout_2->addWidget(m_editChanged);

        tabWidget->addTab(tab, icon7, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        tabWidget->addTab(tab_2, icon8, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QString::fromUtf8("tab_3"));
        tabWidget->addTab(tab_3, icon9, QString());
        splitter->addWidget(tabWidget);

        horizontalLayout_2->addWidget(splitter);

        ListWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(ListWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        ListWindow->setStatusBar(statusbar);
        toolBar = new QToolBar(ListWindow);
        toolBar->setObjectName(QString::fromUtf8("toolBar"));
        toolBar->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        ListWindow->addToolBar(Qt::TopToolBarArea, toolBar);

        toolBar->addAction(m_actInit);
        toolBar->addAction(m_actClear);
        toolBar->addAction(m_actAppend);
        toolBar->addAction(m_actInsert);
        toolBar->addAction(m_actDelete);

        retranslateUi(ListWindow);
        QObject::connect(m_actExit, SIGNAL(triggered()), ListWindow, SLOT(close()));
        QObject::connect(m_actCheck, SIGNAL(triggered()), m_actCheckInverse, SLOT(trigger()));

        toolBox->setCurrentIndex(0);
        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(ListWindow);
    } // setupUi

    void retranslateUi(QMainWindow *ListWindow)
    {
        ListWindow->setWindowTitle(QApplication::translate("ListWindow", "ListWindow", nullptr));
        m_actInit->setText(QApplication::translate("ListWindow", "\345\210\235\345\247\213\345\214\226", nullptr));
        m_actClear->setText(QApplication::translate("ListWindow", "\345\205\250\346\270\205\347\251\272", nullptr));
#ifndef QT_NO_TOOLTIP
        m_actClear->setToolTip(QApplication::translate("ListWindow", "\345\205\250\346\270\205\347\251\272", nullptr));
#endif // QT_NO_TOOLTIP
        m_actAppend->setText(QApplication::translate("ListWindow", "\346\267\273\345\212\240\351\241\271", nullptr));
#ifndef QT_NO_TOOLTIP
        m_actAppend->setToolTip(QApplication::translate("ListWindow", "\346\267\273\345\212\240\351\241\271", nullptr));
#endif // QT_NO_TOOLTIP
        m_actInsert->setText(QApplication::translate("ListWindow", "\346\217\222\345\205\245\351\241\271", nullptr));
#ifndef QT_NO_TOOLTIP
        m_actInsert->setToolTip(QApplication::translate("ListWindow", "\346\217\222\345\205\245\351\241\271", nullptr));
#endif // QT_NO_TOOLTIP
        m_actDelete->setText(QApplication::translate("ListWindow", "\345\210\240\351\231\244\351\241\271", nullptr));
#ifndef QT_NO_TOOLTIP
        m_actDelete->setToolTip(QApplication::translate("ListWindow", "\345\210\240\351\231\244\351\241\271", nullptr));
#endif // QT_NO_TOOLTIP
        m_actCheckAll->setText(QApplication::translate("ListWindow", "\345\205\250\345\213\276\351\200\211", nullptr));
#ifndef QT_NO_TOOLTIP
        m_actCheckAll->setToolTip(QApplication::translate("ListWindow", "\345\205\250\345\213\276\351\200\211", nullptr));
#endif // QT_NO_TOOLTIP
        m_actCheckNone->setText(QApplication::translate("ListWindow", "\344\270\215\345\213\276\351\200\211", nullptr));
#ifndef QT_NO_TOOLTIP
        m_actCheckNone->setToolTip(QApplication::translate("ListWindow", "\344\270\215\345\213\276\351\200\211", nullptr));
#endif // QT_NO_TOOLTIP
        m_actCheckInverse->setText(QApplication::translate("ListWindow", "\345\217\215\345\213\276\351\200\211", nullptr));
#ifndef QT_NO_TOOLTIP
        m_actCheckInverse->setToolTip(QApplication::translate("ListWindow", "\345\217\215\345\213\276\351\200\211", nullptr));
#endif // QT_NO_TOOLTIP
        m_actCheck->setText(QApplication::translate("ListWindow", "\345\213\276\351\200\211\351\241\271", nullptr));
#ifndef QT_NO_TOOLTIP
        m_actCheck->setToolTip(QApplication::translate("ListWindow", "\345\213\276\351\200\211\351\241\271", nullptr));
#endif // QT_NO_TOOLTIP
        m_actExit->setText(QApplication::translate("ListWindow", "\351\200\200\345\207\272", nullptr));
#ifndef QT_NO_TOOLTIP
        m_actExit->setToolTip(QApplication::translate("ListWindow", "\351\200\200\345\207\272", nullptr));
#endif // QT_NO_TOOLTIP
        m_btnInit->setText(QApplication::translate("ListWindow", "...", nullptr));
        m_btnClear->setText(QApplication::translate("ListWindow", "...", nullptr));
        m_btnAppend->setText(QApplication::translate("ListWindow", "...", nullptr));
        m_btnInsert->setText(QApplication::translate("ListWindow", "...", nullptr));
        m_btnDelete->setText(QApplication::translate("ListWindow", "...", nullptr));
        toolBox->setItemText(toolBox->indexOf(page), QApplication::translate("ListWindow", "\347\254\254\344\270\200\351\241\265", nullptr));
        toolBox->setItemText(toolBox->indexOf(page_2), QApplication::translate("ListWindow", "\347\254\254\344\272\214\351\241\265", nullptr));
        toolBox->setItemText(toolBox->indexOf(page_3), QApplication::translate("ListWindow", "\347\254\254\344\270\211\351\241\265", nullptr));
        m_btnCheckAll->setText(QApplication::translate("ListWindow", "...", nullptr));
        m_btnCheckNone->setText(QApplication::translate("ListWindow", "...", nullptr));
        m_btnCheckInverse->setText(QApplication::translate("ListWindow", "...", nullptr));
        m_btnCheck->setText(QApplication::translate("ListWindow", "...", nullptr));
        m_checkEditable->setText(QApplication::translate("ListWindow", " \345\217\257\347\274\226\350\276\221", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("ListWindow", " \347\254\254\344\270\200\351\241\265", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("ListWindow", " \347\254\254\344\272\214\351\241\265", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("ListWindow", "\347\254\254\344\270\211\351\241\265", nullptr));
        toolBar->setWindowTitle(QApplication::translate("ListWindow", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ListWindow: public Ui_ListWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LISTWINDOW_H
