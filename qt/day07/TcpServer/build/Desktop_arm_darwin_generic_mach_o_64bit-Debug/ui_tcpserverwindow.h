/********************************************************************************
** Form generated from reading UI file 'tcpserverwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TCPSERVERWINDOW_H
#define UI_TCPSERVERWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
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

class Ui_TcpServerWindow
{
public:
    QAction *m_actListen;
    QAction *m_actClose;
    QAction *m_actClear;
    QAction *m_actExit;
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QComboBox *m_comboLoalAddr;
    QLabel *label_2;
    QLineEdit *m_editLocalPort;
    QPlainTextEdit *m_editOutput;
    QHBoxLayout *horizontalLayout_2;
    QLineEdit *m_editSend;
    QPushButton *m_btnSend;
    QStatusBar *statusbar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *TcpServerWindow)
    {
        if (TcpServerWindow->objectName().isEmpty())
            TcpServerWindow->setObjectName("TcpServerWindow");
        TcpServerWindow->resize(752, 565);
        m_actListen = new QAction(TcpServerWindow);
        m_actListen->setObjectName("m_actListen");
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/listen.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        m_actListen->setIcon(icon);
        m_actClose = new QAction(TcpServerWindow);
        m_actClose->setObjectName("m_actClose");
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/close.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        m_actClose->setIcon(icon1);
        m_actClear = new QAction(TcpServerWindow);
        m_actClear->setObjectName("m_actClear");
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/images/clear.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        m_actClear->setIcon(icon2);
        m_actExit = new QAction(TcpServerWindow);
        m_actExit->setObjectName("m_actExit");
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/images/exit.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        m_actExit->setIcon(icon3);
        centralwidget = new QWidget(TcpServerWindow);
        centralwidget->setObjectName("centralwidget");
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName("verticalLayout");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label = new QLabel(centralwidget);
        label->setObjectName("label");

        horizontalLayout->addWidget(label);

        m_comboLoalAddr = new QComboBox(centralwidget);
        m_comboLoalAddr->addItem(QString());
        m_comboLoalAddr->addItem(QString());
        m_comboLoalAddr->setObjectName("m_comboLoalAddr");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(m_comboLoalAddr->sizePolicy().hasHeightForWidth());
        m_comboLoalAddr->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(m_comboLoalAddr);

        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");

        horizontalLayout->addWidget(label_2);

        m_editLocalPort = new QLineEdit(centralwidget);
        m_editLocalPort->setObjectName("m_editLocalPort");
        sizePolicy.setHeightForWidth(m_editLocalPort->sizePolicy().hasHeightForWidth());
        m_editLocalPort->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(m_editLocalPort);


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

        TcpServerWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(TcpServerWindow);
        statusbar->setObjectName("statusbar");
        TcpServerWindow->setStatusBar(statusbar);
        toolBar = new QToolBar(TcpServerWindow);
        toolBar->setObjectName("toolBar");
        toolBar->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
        TcpServerWindow->addToolBar(Qt::ToolBarArea::TopToolBarArea, toolBar);

        toolBar->addAction(m_actListen);
        toolBar->addAction(m_actClose);
        toolBar->addAction(m_actClear);
        toolBar->addSeparator();
        toolBar->addAction(m_actExit);

        retranslateUi(TcpServerWindow);
        QObject::connect(m_actExit, &QAction::triggered, TcpServerWindow, qOverload<>(&QMainWindow::close));

        m_btnSend->setDefault(true);


        QMetaObject::connectSlotsByName(TcpServerWindow);
    } // setupUi

    void retranslateUi(QMainWindow *TcpServerWindow)
    {
        TcpServerWindow->setWindowTitle(QCoreApplication::translate("TcpServerWindow", "TCP\346\234\215\345\212\241\345\231\250", nullptr));
        m_actListen->setText(QCoreApplication::translate("TcpServerWindow", "\347\233\221\345\220\254", nullptr));
#if QT_CONFIG(tooltip)
        m_actListen->setToolTip(QCoreApplication::translate("TcpServerWindow", "\347\233\221\345\220\254", nullptr));
#endif // QT_CONFIG(tooltip)
        m_actClose->setText(QCoreApplication::translate("TcpServerWindow", "\345\205\263\351\227\255", nullptr));
#if QT_CONFIG(tooltip)
        m_actClose->setToolTip(QCoreApplication::translate("TcpServerWindow", "\345\205\263\351\227\255", nullptr));
#endif // QT_CONFIG(tooltip)
        m_actClear->setText(QCoreApplication::translate("TcpServerWindow", "\346\270\205\347\251\272", nullptr));
        m_actExit->setText(QCoreApplication::translate("TcpServerWindow", "\351\200\200\345\207\272", nullptr));
#if QT_CONFIG(tooltip)
        m_actExit->setToolTip(QCoreApplication::translate("TcpServerWindow", "\351\200\200\345\207\272", nullptr));
#endif // QT_CONFIG(tooltip)
        label->setText(QCoreApplication::translate("TcpServerWindow", "\346\234\254\345\234\260\345\234\260\345\235\200\357\274\232", nullptr));
        m_comboLoalAddr->setItemText(0, QCoreApplication::translate("TcpServerWindow", "0.0.0.0", nullptr));
        m_comboLoalAddr->setItemText(1, QCoreApplication::translate("TcpServerWindow", "127.0.0.1", nullptr));

        label_2->setText(QCoreApplication::translate("TcpServerWindow", "\346\234\254\345\234\260\347\253\257\345\217\243\357\274\232", nullptr));
        m_btnSend->setText(QCoreApplication::translate("TcpServerWindow", "\345\217\221\351\200\201", nullptr));
        toolBar->setWindowTitle(QCoreApplication::translate("TcpServerWindow", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TcpServerWindow: public Ui_TcpServerWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TCPSERVERWINDOW_H
