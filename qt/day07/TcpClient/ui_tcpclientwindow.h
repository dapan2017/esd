/********************************************************************************
** Form generated from reading UI file 'tcpclientwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
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
            TcpClientWindow->setObjectName(QString::fromUtf8("TcpClientWindow"));
        TcpClientWindow->resize(696, 557);
        m_actConnect = new QAction(TcpClientWindow);
        m_actConnect->setObjectName(QString::fromUtf8("m_actConnect"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/connect.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        m_actConnect->setIcon(icon);
        m_actDisconnect = new QAction(TcpClientWindow);
        m_actDisconnect->setObjectName(QString::fromUtf8("m_actDisconnect"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/disconnect.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        m_actDisconnect->setIcon(icon1);
        m_actClear = new QAction(TcpClientWindow);
        m_actClear->setObjectName(QString::fromUtf8("m_actClear"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/images/clear.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        m_actClear->setIcon(icon2);
        m_actExit = new QAction(TcpClientWindow);
        m_actExit->setObjectName(QString::fromUtf8("m_actExit"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/images/exit.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        m_actExit->setIcon(icon3);
        centralwidget = new QWidget(TcpClientWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        m_editRemoteAddr = new QLineEdit(centralwidget);
        m_editRemoteAddr->setObjectName(QString::fromUtf8("m_editRemoteAddr"));

        horizontalLayout->addWidget(m_editRemoteAddr);

        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout->addWidget(label_2);

        m_editRemotePort = new QLineEdit(centralwidget);
        m_editRemotePort->setObjectName(QString::fromUtf8("m_editRemotePort"));

        horizontalLayout->addWidget(m_editRemotePort);


        verticalLayout->addLayout(horizontalLayout);

        m_editOutput = new QPlainTextEdit(centralwidget);
        m_editOutput->setObjectName(QString::fromUtf8("m_editOutput"));
        m_editOutput->setFrameShape(QFrame::WinPanel);
        m_editOutput->setReadOnly(true);

        verticalLayout->addWidget(m_editOutput);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        m_editSend = new QLineEdit(centralwidget);
        m_editSend->setObjectName(QString::fromUtf8("m_editSend"));

        horizontalLayout_2->addWidget(m_editSend);

        m_btnSend = new QPushButton(centralwidget);
        m_btnSend->setObjectName(QString::fromUtf8("m_btnSend"));
        m_btnSend->setEnabled(false);

        horizontalLayout_2->addWidget(m_btnSend);


        verticalLayout->addLayout(horizontalLayout_2);

        TcpClientWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(TcpClientWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        TcpClientWindow->setStatusBar(statusbar);
        toolBar = new QToolBar(TcpClientWindow);
        toolBar->setObjectName(QString::fromUtf8("toolBar"));
        toolBar->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
        TcpClientWindow->addToolBar(Qt::TopToolBarArea, toolBar);

        toolBar->addAction(m_actConnect);
        toolBar->addAction(m_actDisconnect);
        toolBar->addAction(m_actClear);
        toolBar->addSeparator();
        toolBar->addAction(m_actExit);

        retranslateUi(TcpClientWindow);
        QObject::connect(m_actExit, SIGNAL(triggered()), TcpClientWindow, SLOT(close()));

        m_btnSend->setDefault(true);


        QMetaObject::connectSlotsByName(TcpClientWindow);
    } // setupUi

    void retranslateUi(QMainWindow *TcpClientWindow)
    {
        TcpClientWindow->setWindowTitle(QApplication::translate("TcpClientWindow", "TCP\345\256\242\346\210\267\346\234\272", nullptr));
        m_actConnect->setText(QApplication::translate("TcpClientWindow", "\350\277\236\346\216\245", nullptr));
#ifndef QT_NO_TOOLTIP
        m_actConnect->setToolTip(QApplication::translate("TcpClientWindow", "\350\277\236\346\216\245", nullptr));
#endif // QT_NO_TOOLTIP
        m_actDisconnect->setText(QApplication::translate("TcpClientWindow", "\346\226\255\345\274\200", nullptr));
#ifndef QT_NO_TOOLTIP
        m_actDisconnect->setToolTip(QApplication::translate("TcpClientWindow", "\346\226\255\345\274\200", nullptr));
#endif // QT_NO_TOOLTIP
        m_actClear->setText(QApplication::translate("TcpClientWindow", "\346\270\205\347\251\272", nullptr));
#ifndef QT_NO_TOOLTIP
        m_actClear->setToolTip(QApplication::translate("TcpClientWindow", "\346\270\205\347\251\272", nullptr));
#endif // QT_NO_TOOLTIP
        m_actExit->setText(QApplication::translate("TcpClientWindow", "\351\200\200\345\207\272", nullptr));
#ifndef QT_NO_TOOLTIP
        m_actExit->setToolTip(QApplication::translate("TcpClientWindow", "\351\200\200\345\207\272", nullptr));
#endif // QT_NO_TOOLTIP
        label->setText(QApplication::translate("TcpClientWindow", "\350\277\234\347\250\213\345\234\260\345\235\200\357\274\232", nullptr));
        label_2->setText(QApplication::translate("TcpClientWindow", "\350\277\234\347\250\213\347\253\257\345\217\243\357\274\232", nullptr));
        m_btnSend->setText(QApplication::translate("TcpClientWindow", "\345\217\221\351\200\201", nullptr));
        toolBar->setWindowTitle(QApplication::translate("TcpClientWindow", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TcpClientWindow: public Ui_TcpClientWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TCPCLIENTWINDOW_H
