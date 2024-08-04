/********************************************************************************
** Form generated from reading UI file 'tcpserverwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TCPSERVERWINDOW_H
#define UI_TCPSERVERWINDOW_H

#include <QtCore/QVariant>
#include <Qtgui/QAction>
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
            TcpServerWindow->setObjectName(QString::fromUtf8("TcpServerWindow"));
        TcpServerWindow->resize(752, 565);
        m_actListen = new QAction(TcpServerWindow);
        m_actListen->setObjectName(QString::fromUtf8("m_actListen"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/listen.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        m_actListen->setIcon(icon);
        m_actClose = new QAction(TcpServerWindow);
        m_actClose->setObjectName(QString::fromUtf8("m_actClose"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/close.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        m_actClose->setIcon(icon1);
        m_actClear = new QAction(TcpServerWindow);
        m_actClear->setObjectName(QString::fromUtf8("m_actClear"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/images/clear.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        m_actClear->setIcon(icon2);
        m_actExit = new QAction(TcpServerWindow);
        m_actExit->setObjectName(QString::fromUtf8("m_actExit"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/images/exit.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        m_actExit->setIcon(icon3);
        centralwidget = new QWidget(TcpServerWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        m_comboLoalAddr = new QComboBox(centralwidget);
        m_comboLoalAddr->addItem(QString());
        m_comboLoalAddr->addItem(QString());
        m_comboLoalAddr->setObjectName(QString::fromUtf8("m_comboLoalAddr"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(m_comboLoalAddr->sizePolicy().hasHeightForWidth());
        m_comboLoalAddr->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(m_comboLoalAddr);

        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout->addWidget(label_2);

        m_editLocalPort = new QLineEdit(centralwidget);
        m_editLocalPort->setObjectName(QString::fromUtf8("m_editLocalPort"));
        sizePolicy.setHeightForWidth(m_editLocalPort->sizePolicy().hasHeightForWidth());
        m_editLocalPort->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(m_editLocalPort);


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

        TcpServerWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(TcpServerWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        TcpServerWindow->setStatusBar(statusbar);
        toolBar = new QToolBar(TcpServerWindow);
        toolBar->setObjectName(QString::fromUtf8("toolBar"));
        toolBar->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
        TcpServerWindow->addToolBar(Qt::TopToolBarArea, toolBar);

        toolBar->addAction(m_actListen);
        toolBar->addAction(m_actClose);
        toolBar->addAction(m_actClear);
        toolBar->addSeparator();
        toolBar->addAction(m_actExit);

        retranslateUi(TcpServerWindow);
        QObject::connect(m_actExit, SIGNAL(triggered()), TcpServerWindow, SLOT(close()));

        m_btnSend->setDefault(true);


        QMetaObject::connectSlotsByName(TcpServerWindow);
    } // setupUi

    void retranslateUi(QMainWindow *TcpServerWindow)
    {
        TcpServerWindow->setWindowTitle(QApplication::translate("TcpServerWindow", "TCP\346\234\215\345\212\241\345\231\250", nullptr));
        m_actListen->setText(QApplication::translate("TcpServerWindow", "\347\233\221\345\220\254", nullptr));
#ifndef QT_NO_TOOLTIP
        m_actListen->setToolTip(QApplication::translate("TcpServerWindow", "\347\233\221\345\220\254", nullptr));
#endif // QT_NO_TOOLTIP
        m_actClose->setText(QApplication::translate("TcpServerWindow", "\345\205\263\351\227\255", nullptr));
#ifndef QT_NO_TOOLTIP
        m_actClose->setToolTip(QApplication::translate("TcpServerWindow", "\345\205\263\351\227\255", nullptr));
#endif // QT_NO_TOOLTIP
        m_actClear->setText(QApplication::translate("TcpServerWindow", "\346\270\205\347\251\272", nullptr));
        m_actExit->setText(QApplication::translate("TcpServerWindow", "\351\200\200\345\207\272", nullptr));
#ifndef QT_NO_TOOLTIP
        m_actExit->setToolTip(QApplication::translate("TcpServerWindow", "\351\200\200\345\207\272", nullptr));
#endif // QT_NO_TOOLTIP
        label->setText(QApplication::translate("TcpServerWindow", "\346\234\254\345\234\260\345\234\260\345\235\200\357\274\232", nullptr));
        m_comboLoalAddr->setItemText(0, QApplication::translate("TcpServerWindow", "0.0.0.0", nullptr));
        m_comboLoalAddr->setItemText(1, QApplication::translate("TcpServerWindow", "127.0.0.1", nullptr));

        label_2->setText(QApplication::translate("TcpServerWindow", "\346\234\254\345\234\260\347\253\257\345\217\243\357\274\232", nullptr));
        m_btnSend->setText(QApplication::translate("TcpServerWindow", "\345\217\221\351\200\201", nullptr));
        toolBar->setWindowTitle(QApplication::translate("TcpServerWindow", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TcpServerWindow: public Ui_TcpServerWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TCPSERVERWINDOW_H
