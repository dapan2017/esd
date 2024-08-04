/********************************************************************************
** Form generated from reading UI file 'udpwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UDPWINDOW_H
#define UI_UDPWINDOW_H

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

class Ui_UdpWindow
{
public:
    QAction *m_actBind;
    QAction *m_actAbort;
    QAction *m_actClear;
    QAction *m_actExit;
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QComboBox *m_comboLocalAddr;
    QLabel *label_4;
    QLineEdit *m_editLocalPort;
    QLabel *label_3;
    QLineEdit *m_editRemoteAddr;
    QLabel *label_2;
    QLineEdit *m_editRemotePort;
    QPlainTextEdit *m_editOutput;
    QHBoxLayout *horizontalLayout_2;
    QLineEdit *m_editSend;
    QPushButton *m_btnSend;
    QStatusBar *statusbar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *UdpWindow)
    {
        if (UdpWindow->objectName().isEmpty())
            UdpWindow->setObjectName("UdpWindow");
        UdpWindow->resize(944, 466);
        m_actBind = new QAction(UdpWindow);
        m_actBind->setObjectName("m_actBind");
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/bind.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        m_actBind->setIcon(icon);
        m_actAbort = new QAction(UdpWindow);
        m_actAbort->setObjectName("m_actAbort");
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/abort.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        m_actAbort->setIcon(icon1);
        m_actClear = new QAction(UdpWindow);
        m_actClear->setObjectName("m_actClear");
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/images/clear.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        m_actClear->setIcon(icon2);
        m_actExit = new QAction(UdpWindow);
        m_actExit->setObjectName("m_actExit");
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/images/exit.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        m_actExit->setIcon(icon3);
        centralwidget = new QWidget(UdpWindow);
        centralwidget->setObjectName("centralwidget");
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName("verticalLayout");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        QFont font;
        font.setPointSize(15);
        label->setFont(font);

        horizontalLayout->addWidget(label);

        m_comboLocalAddr = new QComboBox(centralwidget);
        m_comboLocalAddr->addItem(QString());
        m_comboLocalAddr->addItem(QString());
        m_comboLocalAddr->setObjectName("m_comboLocalAddr");
        m_comboLocalAddr->setFont(font);

        horizontalLayout->addWidget(m_comboLocalAddr);

        label_4 = new QLabel(centralwidget);
        label_4->setObjectName("label_4");
        label_4->setFont(font);

        horizontalLayout->addWidget(label_4);

        m_editLocalPort = new QLineEdit(centralwidget);
        m_editLocalPort->setObjectName("m_editLocalPort");
        m_editLocalPort->setFont(font);

        horizontalLayout->addWidget(m_editLocalPort);

        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");
        label_3->setFont(font);

        horizontalLayout->addWidget(label_3);

        m_editRemoteAddr = new QLineEdit(centralwidget);
        m_editRemoteAddr->setObjectName("m_editRemoteAddr");
        m_editRemoteAddr->setFont(font);

        horizontalLayout->addWidget(m_editRemoteAddr);

        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setFont(font);

        horizontalLayout->addWidget(label_2);

        m_editRemotePort = new QLineEdit(centralwidget);
        m_editRemotePort->setObjectName("m_editRemotePort");
        m_editRemotePort->setFont(font);

        horizontalLayout->addWidget(m_editRemotePort);


        verticalLayout->addLayout(horizontalLayout);

        m_editOutput = new QPlainTextEdit(centralwidget);
        m_editOutput->setObjectName("m_editOutput");
        QFont font1;
        font1.setPointSize(20);
        m_editOutput->setFont(font1);
        m_editOutput->setFrameShape(QFrame::StyledPanel);

        verticalLayout->addWidget(m_editOutput);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        m_editSend = new QLineEdit(centralwidget);
        m_editSend->setObjectName("m_editSend");
        m_editSend->setFont(font);

        horizontalLayout_2->addWidget(m_editSend);

        m_btnSend = new QPushButton(centralwidget);
        m_btnSend->setObjectName("m_btnSend");
        m_btnSend->setFont(font);

        horizontalLayout_2->addWidget(m_btnSend);


        verticalLayout->addLayout(horizontalLayout_2);

        UdpWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(UdpWindow);
        statusbar->setObjectName("statusbar");
        UdpWindow->setStatusBar(statusbar);
        toolBar = new QToolBar(UdpWindow);
        toolBar->setObjectName("toolBar");
        toolBar->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
        UdpWindow->addToolBar(Qt::ToolBarArea::TopToolBarArea, toolBar);

        toolBar->addAction(m_actBind);
        toolBar->addAction(m_actAbort);
        toolBar->addAction(m_actClear);
        toolBar->addSeparator();
        toolBar->addAction(m_actExit);

        retranslateUi(UdpWindow);
        QObject::connect(m_actExit, &QAction::triggered, UdpWindow, qOverload<>(&QMainWindow::close));

        m_btnSend->setDefault(true);


        QMetaObject::connectSlotsByName(UdpWindow);
    } // setupUi

    void retranslateUi(QMainWindow *UdpWindow)
    {
        UdpWindow->setWindowTitle(QCoreApplication::translate("UdpWindow", "UDP", nullptr));
        m_actBind->setText(QCoreApplication::translate("UdpWindow", "\347\273\221\345\256\232", nullptr));
#if QT_CONFIG(tooltip)
        m_actBind->setToolTip(QCoreApplication::translate("UdpWindow", "\347\273\221\345\256\232", nullptr));
#endif // QT_CONFIG(tooltip)
        m_actAbort->setText(QCoreApplication::translate("UdpWindow", "\350\247\243\347\273\221", nullptr));
#if QT_CONFIG(tooltip)
        m_actAbort->setToolTip(QCoreApplication::translate("UdpWindow", "\350\247\243\347\273\221", nullptr));
#endif // QT_CONFIG(tooltip)
        m_actClear->setText(QCoreApplication::translate("UdpWindow", "\346\270\205\347\251\272", nullptr));
#if QT_CONFIG(tooltip)
        m_actClear->setToolTip(QCoreApplication::translate("UdpWindow", "\346\270\205\347\251\272", nullptr));
#endif // QT_CONFIG(tooltip)
        m_actExit->setText(QCoreApplication::translate("UdpWindow", "\351\200\200\345\207\272", nullptr));
#if QT_CONFIG(tooltip)
        m_actExit->setToolTip(QCoreApplication::translate("UdpWindow", "\351\200\200\345\207\272", nullptr));
#endif // QT_CONFIG(tooltip)
        label->setText(QCoreApplication::translate("UdpWindow", "\346\234\254\345\234\260\345\234\260\345\235\200:", nullptr));
        m_comboLocalAddr->setItemText(0, QCoreApplication::translate("UdpWindow", "127.0.0.1", nullptr));
        m_comboLocalAddr->setItemText(1, QCoreApplication::translate("UdpWindow", "0.0.0.0", nullptr));

        label_4->setText(QCoreApplication::translate("UdpWindow", "\346\234\254\345\234\260\347\253\257\345\217\243:", nullptr));
        label_3->setText(QCoreApplication::translate("UdpWindow", "\350\277\234\347\250\213\345\234\260\345\235\200:", nullptr));
        label_2->setText(QCoreApplication::translate("UdpWindow", "\350\277\234\347\250\213\347\253\257\345\217\243:", nullptr));
        m_btnSend->setText(QCoreApplication::translate("UdpWindow", "\345\217\221\351\200\201", nullptr));
        toolBar->setWindowTitle(QCoreApplication::translate("UdpWindow", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class UdpWindow: public Ui_UdpWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UDPWINDOW_H
