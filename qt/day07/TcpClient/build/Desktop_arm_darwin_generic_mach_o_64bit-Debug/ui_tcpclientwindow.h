/********************************************************************************
** Form generated from reading UI file 'tcpclientwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TCPCLIENTWINDOW_H
#define UI_TCPCLIENTWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TcpClientWindow
{
public:
    QAction *m_actConnect;
    QAction *m_actDisconnect;
    QAction *m_actClear;
    QAction *m_actExit;
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *m_editRemoteAddr;
    QLabel *label_2;
    QLineEdit *m_editRemotePort;
    QPlainTextEdit *m_editOutput;
    QHBoxLayout *horizontalLayout_2;
    QLineEdit *m_editSend;
    QPushButton *m_btnSend;
    QStatusBar *statusbar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *TcpClientWindow)
    {
        if (TcpClientWindow->objectName().isEmpty())
            TcpClientWindow->setObjectName("TcpClientWindow");
        TcpClientWindow->resize(696, 557);
        m_actConnect = new QAction(TcpClientWindow);
        m_actConnect->setObjectName("m_actConnect");
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/connect.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        m_actConnect->setIcon(icon);
        m_actDisconnect = new QAction(TcpClientWindow);
        m_actDisconnect->setObjectName("m_actDisconnect");
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/disconnect.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        m_actDisconnect->setIcon(icon1);
        m_actClear = new QAction(TcpClientWindow);
        m_actClear->setObjectName("m_actClear");
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/images/clear.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        m_actClear->setIcon(icon2);
        m_actExit = new QAction(TcpClientWindow);
        m_actExit->setObjectName("m_actExit");
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/images/exit.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        m_actExit->setIcon(icon3);
        centralwidget = new QWidget(TcpClientWindow);
        centralwidget->setObjectName("centralwidget");
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName("verticalLayout");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label = new QLabel(centralwidget);
        label->setObjectName("label");

        horizontalLayout->addWidget(label);

        m_editRemoteAddr = new QLineEdit(centralwidget);
        m_editRemoteAddr->setObjectName("m_editRemoteAddr");

        horizontalLayout->addWidget(m_editRemoteAddr);

        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");

        horizontalLayout->addWidget(label_2);

        m_editRemotePort = new QLineEdit(centralwidget);
        m_editRemotePort->setObjectName("m_editRemotePort");

        horizontalLayout->addWidget(m_editRemotePort);


        verticalLayout->addLayout(horizontalLayout);

        m_editOutput = new QPlainTextEdit(centralwidget);
        m_editOutput->setObjectName("m_editOutput");
        m_editOutput->setFrameShape(QFrame::WinPanel);
        m_editOutput->setReadOnly(true);

        verticalLayout->addWidget(m_editOutput);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        m_editSend = new QLineEdit(centralwidget);
        m_editSend->setObjectName("m_editSend");

        horizontalLayout_2->addWidget(m_editSend);

        m_btnSend = new QPushButton(centralwidget);
        m_btnSend->setObjectName("m_btnSend");
        m_btnSend->setEnabled(false);

        horizontalLayout_2->addWidget(m_btnSend);


        verticalLayout->addLayout(horizontalLayout_2);

        TcpClientWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(TcpClientWindow);
        statusbar->setObjectName("statusbar");
        TcpClientWindow->setStatusBar(statusbar);
        toolBar = new QToolBar(TcpClientWindow);
        toolBar->setObjectName("toolBar");
        toolBar->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
        TcpClientWindow->addToolBar(Qt::ToolBarArea::TopToolBarArea, toolBar);

        toolBar->addAction(m_actConnect);
        toolBar->addAction(m_actDisconnect);
        toolBar->addAction(m_actClear);
        toolBar->addSeparator();
        toolBar->addAction(m_actExit);

        retranslateUi(TcpClientWindow);
        QObject::connect(m_actExit, &QAction::triggered, TcpClientWindow, qOverload<>(&QMainWindow::close));

        m_btnSend->setDefault(true);


        QMetaObject::connectSlotsByName(TcpClientWindow);
    } // setupUi

    void retranslateUi(QMainWindow *TcpClientWindow)
    {
        TcpClientWindow->setWindowTitle(QCoreApplication::translate("TcpClientWindow", "TCP\345\256\242\346\210\267\346\234\272", nullptr));
        m_actConnect->setText(QCoreApplication::translate("TcpClientWindow", "\350\277\236\346\216\245", nullptr));
#if QT_CONFIG(tooltip)
        m_actConnect->setToolTip(QCoreApplication::translate("TcpClientWindow", "\350\277\236\346\216\245", nullptr));
#endif // QT_CONFIG(tooltip)
        m_actDisconnect->setText(QCoreApplication::translate("TcpClientWindow", "\346\226\255\345\274\200", nullptr));
#if QT_CONFIG(tooltip)
        m_actDisconnect->setToolTip(QCoreApplication::translate("TcpClientWindow", "\346\226\255\345\274\200", nullptr));
#endif // QT_CONFIG(tooltip)
        m_actClear->setText(QCoreApplication::translate("TcpClientWindow", "\346\270\205\347\251\272", nullptr));
#if QT_CONFIG(tooltip)
        m_actClear->setToolTip(QCoreApplication::translate("TcpClientWindow", "\346\270\205\347\251\272", nullptr));
#endif // QT_CONFIG(tooltip)
        m_actExit->setText(QCoreApplication::translate("TcpClientWindow", "\351\200\200\345\207\272", nullptr));
#if QT_CONFIG(tooltip)
        m_actExit->setToolTip(QCoreApplication::translate("TcpClientWindow", "\351\200\200\345\207\272", nullptr));
#endif // QT_CONFIG(tooltip)
        label->setText(QCoreApplication::translate("TcpClientWindow", "\350\277\234\347\250\213\345\234\260\345\235\200\357\274\232", nullptr));
        label_2->setText(QCoreApplication::translate("TcpClientWindow", "\350\277\234\347\250\213\347\253\257\345\217\243\357\274\232", nullptr));
        m_btnSend->setText(QCoreApplication::translate("TcpClientWindow", "\345\217\221\351\200\201", nullptr));
        toolBar->setWindowTitle(QCoreApplication::translate("TcpClientWindow", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TcpClientWindow: public Ui_TcpClientWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TCPCLIENTWINDOW_H
