/********************************************************************************
** Form generated from reading UI file 'editorwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDITORWINDOW_H
#define UI_EDITORWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_EditorWindow
{
public:
    QAction *m_actNew;
    QAction *m_actOpen;
    QAction *m_actExit;
    QAction *m_actCut;
    QAction *m_actCopy;
    QAction *m_actPaste;
    QAction *m_actClear;
    QAction *m_actBold;
    QAction *m_actItalic;
    QAction *m_actUnderline;
    QAction *m_actToolBar;
    QAction *m_actStatusBar;
    QAction *m_actAbout;
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout;
    QTextEdit *m_edit;
    QMenuBar *menubar;
    QMenu *menu;
    QMenu *menu_2;
    QMenu *menu_3;
    QMenu *menu_4;
    QMenu *menu_5;
    QStatusBar *statusbar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *EditorWindow)
    {
        if (EditorWindow->objectName().isEmpty())
            EditorWindow->setObjectName(QString::fromUtf8("EditorWindow"));
        EditorWindow->resize(876, 631);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/AppIcon.ico"), QSize(), QIcon::Normal, QIcon::Off);
        EditorWindow->setWindowIcon(icon);
        m_actNew = new QAction(EditorWindow);
        m_actNew->setObjectName(QString::fromUtf8("m_actNew"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/new.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        m_actNew->setIcon(icon1);
        m_actOpen = new QAction(EditorWindow);
        m_actOpen->setObjectName(QString::fromUtf8("m_actOpen"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/images/open.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        m_actOpen->setIcon(icon2);
        m_actExit = new QAction(EditorWindow);
        m_actExit->setObjectName(QString::fromUtf8("m_actExit"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/images/exit.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        m_actExit->setIcon(icon3);
        m_actCut = new QAction(EditorWindow);
        m_actCut->setObjectName(QString::fromUtf8("m_actCut"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/images/cut.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        m_actCut->setIcon(icon4);
        m_actCopy = new QAction(EditorWindow);
        m_actCopy->setObjectName(QString::fromUtf8("m_actCopy"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/images/copy.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        m_actCopy->setIcon(icon5);
        m_actPaste = new QAction(EditorWindow);
        m_actPaste->setObjectName(QString::fromUtf8("m_actPaste"));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/images/paste.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        m_actPaste->setIcon(icon6);
        m_actClear = new QAction(EditorWindow);
        m_actClear->setObjectName(QString::fromUtf8("m_actClear"));
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/images/clear.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        m_actClear->setIcon(icon7);
        m_actBold = new QAction(EditorWindow);
        m_actBold->setObjectName(QString::fromUtf8("m_actBold"));
        m_actBold->setCheckable(true);
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/images/bld.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        m_actBold->setIcon(icon8);
        m_actItalic = new QAction(EditorWindow);
        m_actItalic->setObjectName(QString::fromUtf8("m_actItalic"));
        m_actItalic->setCheckable(true);
        QIcon icon9;
        icon9.addFile(QString::fromUtf8(":/images/itl.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        m_actItalic->setIcon(icon9);
        m_actUnderline = new QAction(EditorWindow);
        m_actUnderline->setObjectName(QString::fromUtf8("m_actUnderline"));
        m_actUnderline->setCheckable(true);
        QIcon icon10;
        icon10.addFile(QString::fromUtf8(":/images/under.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        m_actUnderline->setIcon(icon10);
        m_actToolBar = new QAction(EditorWindow);
        m_actToolBar->setObjectName(QString::fromUtf8("m_actToolBar"));
        m_actToolBar->setCheckable(true);
        m_actToolBar->setChecked(true);
        m_actStatusBar = new QAction(EditorWindow);
        m_actStatusBar->setObjectName(QString::fromUtf8("m_actStatusBar"));
        m_actStatusBar->setCheckable(true);
        m_actStatusBar->setChecked(true);
        m_actAbout = new QAction(EditorWindow);
        m_actAbout->setObjectName(QString::fromUtf8("m_actAbout"));
        centralwidget = new QWidget(EditorWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        horizontalLayout = new QHBoxLayout(centralwidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        m_edit = new QTextEdit(centralwidget);
        m_edit->setObjectName(QString::fromUtf8("m_edit"));

        horizontalLayout->addWidget(m_edit);

        EditorWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(EditorWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 876, 23));
        menu = new QMenu(menubar);
        menu->setObjectName(QString::fromUtf8("menu"));
        menu_2 = new QMenu(menubar);
        menu_2->setObjectName(QString::fromUtf8("menu_2"));
        menu_3 = new QMenu(menubar);
        menu_3->setObjectName(QString::fromUtf8("menu_3"));
        menu_4 = new QMenu(menubar);
        menu_4->setObjectName(QString::fromUtf8("menu_4"));
        menu_5 = new QMenu(menubar);
        menu_5->setObjectName(QString::fromUtf8("menu_5"));
        EditorWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(EditorWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        EditorWindow->setStatusBar(statusbar);
        toolBar = new QToolBar(EditorWindow);
        toolBar->setObjectName(QString::fromUtf8("toolBar"));
        toolBar->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        EditorWindow->addToolBar(Qt::TopToolBarArea, toolBar);

        menubar->addAction(menu->menuAction());
        menubar->addAction(menu_2->menuAction());
        menubar->addAction(menu_3->menuAction());
        menubar->addAction(menu_4->menuAction());
        menubar->addAction(menu_5->menuAction());
        menu->addAction(m_actNew);
        menu->addAction(m_actOpen);
        menu->addSeparator();
        menu->addAction(m_actExit);
        menu_2->addAction(m_actCut);
        menu_2->addAction(m_actCopy);
        menu_2->addAction(m_actPaste);
        menu_2->addSeparator();
        menu_2->addAction(m_actClear);
        menu_3->addAction(m_actBold);
        menu_3->addAction(m_actItalic);
        menu_3->addAction(m_actUnderline);
        menu_4->addAction(m_actToolBar);
        menu_4->addAction(m_actStatusBar);
        menu_5->addAction(m_actAbout);
        toolBar->addAction(m_actNew);
        toolBar->addAction(m_actOpen);
        toolBar->addAction(m_actExit);
        toolBar->addSeparator();
        toolBar->addAction(m_actCut);
        toolBar->addAction(m_actCopy);
        toolBar->addAction(m_actPaste);
        toolBar->addAction(m_actClear);
        toolBar->addSeparator();
        toolBar->addAction(m_actBold);
        toolBar->addAction(m_actItalic);
        toolBar->addAction(m_actUnderline);

        retranslateUi(EditorWindow);
        QObject::connect(m_actExit, SIGNAL(triggered()), EditorWindow, SLOT(close()));
        QObject::connect(m_actCut, SIGNAL(triggered()), m_edit, SLOT(cut()));
        QObject::connect(m_actCopy, SIGNAL(triggered()), m_edit, SLOT(copy()));
        QObject::connect(m_actPaste, SIGNAL(triggered()), m_edit, SLOT(paste()));
        QObject::connect(m_actClear, SIGNAL(triggered()), m_edit, SLOT(clear()));

        QMetaObject::connectSlotsByName(EditorWindow);
    } // setupUi

    void retranslateUi(QMainWindow *EditorWindow)
    {
        EditorWindow->setWindowTitle(QApplication::translate("EditorWindow", "\346\226\207\346\234\254\347\274\226\350\276\221\345\231\250", nullptr));
        m_actNew->setText(QApplication::translate("EditorWindow", "\346\226\260\345\273\272", nullptr));
#ifndef QT_NO_TOOLTIP
        m_actNew->setToolTip(QApplication::translate("EditorWindow", "\346\226\260\345\273\272", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_SHORTCUT
        m_actNew->setShortcut(QApplication::translate("EditorWindow", "Ctrl+N", nullptr));
#endif // QT_NO_SHORTCUT
        m_actOpen->setText(QApplication::translate("EditorWindow", "\346\211\223\345\274\200", nullptr));
#ifndef QT_NO_TOOLTIP
        m_actOpen->setToolTip(QApplication::translate("EditorWindow", "\346\211\223\345\274\200", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_SHORTCUT
        m_actOpen->setShortcut(QApplication::translate("EditorWindow", "Ctrl+O", nullptr));
#endif // QT_NO_SHORTCUT
        m_actExit->setText(QApplication::translate("EditorWindow", "\351\200\200\345\207\272", nullptr));
#ifndef QT_NO_TOOLTIP
        m_actExit->setToolTip(QApplication::translate("EditorWindow", "\351\200\200\345\207\272", nullptr));
#endif // QT_NO_TOOLTIP
        m_actCut->setText(QApplication::translate("EditorWindow", "\345\211\252\345\210\207", nullptr));
#ifndef QT_NO_TOOLTIP
        m_actCut->setToolTip(QApplication::translate("EditorWindow", "\345\211\252\345\210\207", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_SHORTCUT
        m_actCut->setShortcut(QApplication::translate("EditorWindow", "Ctrl+X", nullptr));
#endif // QT_NO_SHORTCUT
        m_actCopy->setText(QApplication::translate("EditorWindow", "\345\244\215\345\210\266", nullptr));
#ifndef QT_NO_TOOLTIP
        m_actCopy->setToolTip(QApplication::translate("EditorWindow", "\345\244\215\345\210\266", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_SHORTCUT
        m_actCopy->setShortcut(QApplication::translate("EditorWindow", "Ctrl+C", nullptr));
#endif // QT_NO_SHORTCUT
        m_actPaste->setText(QApplication::translate("EditorWindow", "\347\262\230\350\264\264", nullptr));
#ifndef QT_NO_TOOLTIP
        m_actPaste->setToolTip(QApplication::translate("EditorWindow", "\347\262\230\350\264\264", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_SHORTCUT
        m_actPaste->setShortcut(QApplication::translate("EditorWindow", "Ctrl+V", nullptr));
#endif // QT_NO_SHORTCUT
        m_actClear->setText(QApplication::translate("EditorWindow", "\346\270\205\347\251\272", nullptr));
#ifndef QT_NO_TOOLTIP
        m_actClear->setToolTip(QApplication::translate("EditorWindow", "\346\270\205\347\251\272", nullptr));
#endif // QT_NO_TOOLTIP
        m_actBold->setText(QApplication::translate("EditorWindow", "\347\262\227\344\275\223", nullptr));
#ifndef QT_NO_TOOLTIP
        m_actBold->setToolTip(QApplication::translate("EditorWindow", "\347\262\227\344\275\223", nullptr));
#endif // QT_NO_TOOLTIP
        m_actItalic->setText(QApplication::translate("EditorWindow", "\346\226\234\344\275\223", nullptr));
#ifndef QT_NO_TOOLTIP
        m_actItalic->setToolTip(QApplication::translate("EditorWindow", "\346\226\234\344\275\223", nullptr));
#endif // QT_NO_TOOLTIP
        m_actUnderline->setText(QApplication::translate("EditorWindow", "\344\270\213\345\210\222\347\272\277", nullptr));
#ifndef QT_NO_TOOLTIP
        m_actUnderline->setToolTip(QApplication::translate("EditorWindow", "\344\270\213\345\210\222\347\272\277", nullptr));
#endif // QT_NO_TOOLTIP
        m_actToolBar->setText(QApplication::translate("EditorWindow", "\345\267\245\345\205\267\346\240\217", nullptr));
#ifndef QT_NO_TOOLTIP
        m_actToolBar->setToolTip(QApplication::translate("EditorWindow", "\345\267\245\345\205\267\346\240\217", nullptr));
#endif // QT_NO_TOOLTIP
        m_actStatusBar->setText(QApplication::translate("EditorWindow", "\347\212\266\346\200\201\346\240\217", nullptr));
#ifndef QT_NO_TOOLTIP
        m_actStatusBar->setToolTip(QApplication::translate("EditorWindow", "\347\212\266\346\200\201\346\240\217", nullptr));
#endif // QT_NO_TOOLTIP
        m_actAbout->setText(QApplication::translate("EditorWindow", "\345\205\263\344\272\216", nullptr));
#ifndef QT_NO_TOOLTIP
        m_actAbout->setToolTip(QApplication::translate("EditorWindow", "\345\205\263\344\272\216", nullptr));
#endif // QT_NO_TOOLTIP
        menu->setTitle(QApplication::translate("EditorWindow", "\346\226\207\344\273\266", nullptr));
        menu_2->setTitle(QApplication::translate("EditorWindow", "\347\274\226\350\276\221", nullptr));
        menu_3->setTitle(QApplication::translate("EditorWindow", "\346\240\274\345\274\217", nullptr));
        menu_4->setTitle(QApplication::translate("EditorWindow", "\346\237\245\347\234\213", nullptr));
        menu_5->setTitle(QApplication::translate("EditorWindow", "\345\270\256\345\212\251", nullptr));
        toolBar->setWindowTitle(QApplication::translate("EditorWindow", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class EditorWindow: public Ui_EditorWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDITORWINDOW_H
