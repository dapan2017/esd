/********************************************************************************
** Form generated from reading UI file 'editorwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDITORWINDOW_H
#define UI_EDITORWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QIcon>
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
            EditorWindow->setObjectName("EditorWindow");
        EditorWindow->resize(876, 631);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/AppIcon.ico"), QSize(), QIcon::Normal, QIcon::Off);
        EditorWindow->setWindowIcon(icon);
        m_actNew = new QAction(EditorWindow);
        m_actNew->setObjectName("m_actNew");
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/new.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        m_actNew->setIcon(icon1);
        m_actOpen = new QAction(EditorWindow);
        m_actOpen->setObjectName("m_actOpen");
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/images/open.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        m_actOpen->setIcon(icon2);
        m_actExit = new QAction(EditorWindow);
        m_actExit->setObjectName("m_actExit");
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/images/exit.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        m_actExit->setIcon(icon3);
        m_actCut = new QAction(EditorWindow);
        m_actCut->setObjectName("m_actCut");
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/images/cut.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        m_actCut->setIcon(icon4);
        m_actCopy = new QAction(EditorWindow);
        m_actCopy->setObjectName("m_actCopy");
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/images/copy.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        m_actCopy->setIcon(icon5);
        m_actPaste = new QAction(EditorWindow);
        m_actPaste->setObjectName("m_actPaste");
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/images/paste.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        m_actPaste->setIcon(icon6);
        m_actClear = new QAction(EditorWindow);
        m_actClear->setObjectName("m_actClear");
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/images/clear.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        m_actClear->setIcon(icon7);
        m_actBold = new QAction(EditorWindow);
        m_actBold->setObjectName("m_actBold");
        m_actBold->setCheckable(true);
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/images/bld.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        m_actBold->setIcon(icon8);
        m_actItalic = new QAction(EditorWindow);
        m_actItalic->setObjectName("m_actItalic");
        m_actItalic->setCheckable(true);
        QIcon icon9;
        icon9.addFile(QString::fromUtf8(":/images/itl.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        m_actItalic->setIcon(icon9);
        m_actUnderline = new QAction(EditorWindow);
        m_actUnderline->setObjectName("m_actUnderline");
        m_actUnderline->setCheckable(true);
        QIcon icon10;
        icon10.addFile(QString::fromUtf8(":/images/under.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        m_actUnderline->setIcon(icon10);
        m_actToolBar = new QAction(EditorWindow);
        m_actToolBar->setObjectName("m_actToolBar");
        m_actToolBar->setCheckable(true);
        m_actToolBar->setChecked(true);
        m_actStatusBar = new QAction(EditorWindow);
        m_actStatusBar->setObjectName("m_actStatusBar");
        m_actStatusBar->setCheckable(true);
        m_actStatusBar->setChecked(true);
        m_actAbout = new QAction(EditorWindow);
        m_actAbout->setObjectName("m_actAbout");
        centralwidget = new QWidget(EditorWindow);
        centralwidget->setObjectName("centralwidget");
        horizontalLayout = new QHBoxLayout(centralwidget);
        horizontalLayout->setObjectName("horizontalLayout");
        m_edit = new QTextEdit(centralwidget);
        m_edit->setObjectName("m_edit");

        horizontalLayout->addWidget(m_edit);

        EditorWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(EditorWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 876, 23));
        menu = new QMenu(menubar);
        menu->setObjectName("menu");
        menu_2 = new QMenu(menubar);
        menu_2->setObjectName("menu_2");
        menu_3 = new QMenu(menubar);
        menu_3->setObjectName("menu_3");
        menu_4 = new QMenu(menubar);
        menu_4->setObjectName("menu_4");
        menu_5 = new QMenu(menubar);
        menu_5->setObjectName("menu_5");
        EditorWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(EditorWindow);
        statusbar->setObjectName("statusbar");
        EditorWindow->setStatusBar(statusbar);
        toolBar = new QToolBar(EditorWindow);
        toolBar->setObjectName("toolBar");
        toolBar->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        EditorWindow->addToolBar(Qt::ToolBarArea::TopToolBarArea, toolBar);

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
        QObject::connect(m_actExit, &QAction::triggered, EditorWindow, qOverload<>(&QMainWindow::close));
        QObject::connect(m_actCut, &QAction::triggered, m_edit, qOverload<>(&QTextEdit::cut));
        QObject::connect(m_actCopy, &QAction::triggered, m_edit, qOverload<>(&QTextEdit::copy));
        QObject::connect(m_actPaste, &QAction::triggered, m_edit, qOverload<>(&QTextEdit::paste));
        QObject::connect(m_actClear, &QAction::triggered, m_edit, qOverload<>(&QTextEdit::clear));

        QMetaObject::connectSlotsByName(EditorWindow);
    } // setupUi

    void retranslateUi(QMainWindow *EditorWindow)
    {
        EditorWindow->setWindowTitle(QCoreApplication::translate("EditorWindow", "\346\226\207\346\234\254\347\274\226\350\276\221\345\231\250", nullptr));
        m_actNew->setText(QCoreApplication::translate("EditorWindow", "\346\226\260\345\273\272", nullptr));
#if QT_CONFIG(tooltip)
        m_actNew->setToolTip(QCoreApplication::translate("EditorWindow", "\346\226\260\345\273\272", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        m_actNew->setShortcut(QCoreApplication::translate("EditorWindow", "Ctrl+N", nullptr));
#endif // QT_CONFIG(shortcut)
        m_actOpen->setText(QCoreApplication::translate("EditorWindow", "\346\211\223\345\274\200", nullptr));
#if QT_CONFIG(tooltip)
        m_actOpen->setToolTip(QCoreApplication::translate("EditorWindow", "\346\211\223\345\274\200", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        m_actOpen->setShortcut(QCoreApplication::translate("EditorWindow", "Ctrl+O", nullptr));
#endif // QT_CONFIG(shortcut)
        m_actExit->setText(QCoreApplication::translate("EditorWindow", "\351\200\200\345\207\272", nullptr));
#if QT_CONFIG(tooltip)
        m_actExit->setToolTip(QCoreApplication::translate("EditorWindow", "\351\200\200\345\207\272", nullptr));
#endif // QT_CONFIG(tooltip)
        m_actCut->setText(QCoreApplication::translate("EditorWindow", "\345\211\252\345\210\207", nullptr));
#if QT_CONFIG(tooltip)
        m_actCut->setToolTip(QCoreApplication::translate("EditorWindow", "\345\211\252\345\210\207", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        m_actCut->setShortcut(QCoreApplication::translate("EditorWindow", "Ctrl+X", nullptr));
#endif // QT_CONFIG(shortcut)
        m_actCopy->setText(QCoreApplication::translate("EditorWindow", "\345\244\215\345\210\266", nullptr));
#if QT_CONFIG(tooltip)
        m_actCopy->setToolTip(QCoreApplication::translate("EditorWindow", "\345\244\215\345\210\266", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        m_actCopy->setShortcut(QCoreApplication::translate("EditorWindow", "Ctrl+C", nullptr));
#endif // QT_CONFIG(shortcut)
        m_actPaste->setText(QCoreApplication::translate("EditorWindow", "\347\262\230\350\264\264", nullptr));
#if QT_CONFIG(tooltip)
        m_actPaste->setToolTip(QCoreApplication::translate("EditorWindow", "\347\262\230\350\264\264", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        m_actPaste->setShortcut(QCoreApplication::translate("EditorWindow", "Ctrl+V", nullptr));
#endif // QT_CONFIG(shortcut)
        m_actClear->setText(QCoreApplication::translate("EditorWindow", "\346\270\205\347\251\272", nullptr));
#if QT_CONFIG(tooltip)
        m_actClear->setToolTip(QCoreApplication::translate("EditorWindow", "\346\270\205\347\251\272", nullptr));
#endif // QT_CONFIG(tooltip)
        m_actBold->setText(QCoreApplication::translate("EditorWindow", "\347\262\227\344\275\223", nullptr));
#if QT_CONFIG(tooltip)
        m_actBold->setToolTip(QCoreApplication::translate("EditorWindow", "\347\262\227\344\275\223", nullptr));
#endif // QT_CONFIG(tooltip)
        m_actItalic->setText(QCoreApplication::translate("EditorWindow", "\346\226\234\344\275\223", nullptr));
#if QT_CONFIG(tooltip)
        m_actItalic->setToolTip(QCoreApplication::translate("EditorWindow", "\346\226\234\344\275\223", nullptr));
#endif // QT_CONFIG(tooltip)
        m_actUnderline->setText(QCoreApplication::translate("EditorWindow", "\344\270\213\345\210\222\347\272\277", nullptr));
#if QT_CONFIG(tooltip)
        m_actUnderline->setToolTip(QCoreApplication::translate("EditorWindow", "\344\270\213\345\210\222\347\272\277", nullptr));
#endif // QT_CONFIG(tooltip)
        m_actToolBar->setText(QCoreApplication::translate("EditorWindow", "\345\267\245\345\205\267\346\240\217", nullptr));
#if QT_CONFIG(tooltip)
        m_actToolBar->setToolTip(QCoreApplication::translate("EditorWindow", "\345\267\245\345\205\267\346\240\217", nullptr));
#endif // QT_CONFIG(tooltip)
        m_actStatusBar->setText(QCoreApplication::translate("EditorWindow", "\347\212\266\346\200\201\346\240\217", nullptr));
#if QT_CONFIG(tooltip)
        m_actStatusBar->setToolTip(QCoreApplication::translate("EditorWindow", "\347\212\266\346\200\201\346\240\217", nullptr));
#endif // QT_CONFIG(tooltip)
        m_actAbout->setText(QCoreApplication::translate("EditorWindow", "\345\205\263\344\272\216", nullptr));
#if QT_CONFIG(tooltip)
        m_actAbout->setToolTip(QCoreApplication::translate("EditorWindow", "\345\205\263\344\272\216", nullptr));
#endif // QT_CONFIG(tooltip)
        menu->setTitle(QCoreApplication::translate("EditorWindow", "\346\226\207\344\273\266", nullptr));
        menu_2->setTitle(QCoreApplication::translate("EditorWindow", "\347\274\226\350\276\221", nullptr));
        menu_3->setTitle(QCoreApplication::translate("EditorWindow", "\346\240\274\345\274\217", nullptr));
        menu_4->setTitle(QCoreApplication::translate("EditorWindow", "\346\237\245\347\234\213", nullptr));
        menu_5->setTitle(QCoreApplication::translate("EditorWindow", "\345\270\256\345\212\251", nullptr));
        toolBar->setWindowTitle(QCoreApplication::translate("EditorWindow", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class EditorWindow: public Ui_EditorWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDITORWINDOW_H
