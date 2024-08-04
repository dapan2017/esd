/********************************************************************************
** Form generated from reading UI file 'udpwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UDPWINDOW_H
#define UI_UDPWINDOW_H

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
            UdpWindow->setObjectName(QString::fromUtf8("UdpWindow"));
        UdpWindow->resize(944, 466);
        m_actBind = new QAction(UdpWindow);
        m_actBind->setObjectName(QString::fromUtf8("m_actBind"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/bind.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        m_actBind->setIcon(icon);
        m_actAbort = new QAction(UdpWindow);
        m_actAbort->setObjectName(QString::fromUtf8("m_actAbort"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/abort.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        m_actAbort->setIcon(icon1);
        m_actClear = new QAction(UdpWindow);
        m_actClear->setObjectName(QString::fromUtf8("m_actClear"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/images/clear.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        m_actClear->setIcon(icon2);
        m_actExit = new QAction(UdpWindow);
        m_actExit->setObjectName(QString::fromUtf8("m_actExit"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/images/exit.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        m_actExit->setIcon(icon3);
        centralwidget = new QWidget(UdpWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font;
        font.setPointSize(15);
        label->setFont(font);

        horizontalLayout->addWidget(label);

        m_comboLocalAddr = new QComboBox(centralwidget);
        m_comboLocalAddr->addItem(QString());
        m_comboLocalAddr->addItem(QString());
        m_comboLocalAddr->setObjectName(QString::fromUtf8("m_comboLocalAddr"));
        m_comboLocalAddr->setFont(font);

        horizontalLayout->addWidget(m_comboLocalAddr);

        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setFont(font);

        horizontalLayout->addWidget(label_4);

        m_editLocalPort = new QLineEdit(centralwidget);
        m_editLocalPort->setObjectName(QString::fromUtf8("m_editLocalPort"));
        m_editLocalPort->setFont(font);

        horizontalLayout->addWidget(m_editLocalPort);

        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setFont(font);

        horizontalLayout->addWidget(label_3);

        m_editRemoteAddr = new QLineEdit(centralwidget);
        m_editRemoteAddr->setObjectName(QString::fromUtf8("m_editRemoteAddr"));
        m_editRemoteAddr->setFont(font);

        horizontalLayout->addWidget(m_editRemoteAddr);

        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setFont(font);

        horizontalLayout->addWidget(label_2);

        m_editRemotePort = new QLineEdit(centralwidget);
        m_editRemotePort->setObjectName(QString::fromUtf8("m_editRemotePort"));
        m_editRemotePort->setFont(font);

        horizontalLayout->addWidget(m_editRemotePort);


        verticalLayout->addLayout(horizontalLayout);

        m_editOutput = new QPlainTextEdit(centralwidget);
        m_editOutput->setObjectName(QString::fromUtf8("m_editOutput"));
        QFont font1;
        font1.setPointSize(20);
        m_editOutput->setFont(font1);
        m_editOutput->setFrameShape(QFrame::StyledPanel);

        verticalLayout->addWidget(m_editOutput);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        m_editSend = new QLineEdit(centralwidget);
        m_editSend->setObjectName(QString::fromUtf8("m_editSend"));
        m_editSend->setFont(font);

        horizontalLayout_2->addWidget(m_editSend);

        m_btnSend = new QPushButton(centralwidget);
        m_btnSend->setObjectName(QString::fromUtf8("m_btnSend"));
        m_btnSend->setFont(font);

        horizontalLayout_2->addWidget(m_btnSend);


        verticalLayout->addLayout(horizontalLayout_2);

        UdpWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(UdpWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        UdpWindow->setStatusBar(statusbar);
        toolBar = new QToolBar(UdpWindow);
        toolBar->setObjectName(QString::fromUtf8("toolBar"));
        toolBar->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
        UdpWindow->addToolBar(Qt::TopToolBarArea, toolBar);

        toolBar->addAction(m_actBind);
        toolBar->addAction(m_actAbort);
        toolBar->addAction(m_actClear);
        toolBar->addSeparator();
        toolBar->addAction(m_actExit);

        retranslateUi(UdpWindow);
        QObject::connect(m_actExit, SIGNAL(triggered()), UdpWindow, SLOT(close()));

        m_btnSend->setDefault(true);


        QMetaObject::connectSlotsByName(UdpWindow);
    } // setupUi

    void retranslateUi(QMainWindow *UdpWindow)
    {
        UdpWindow->setWindowTitle(QApplication::translate("UdpWindow", "UDP", nullptr));
        m_actBind->setText(QApplication::translate("UdpWindow", "\347\273\221\345\256\232", nullptr));
#ifndef QT_NO_TOOLTIP
        m_actBind->setToolTip(QApplication::translate("UdpWindow", "\347\273\221\345\256\232", nullptr));
#endif // QT_NO_TOOLTIP
        m_actAbort->setText(QApplication::translate("UdpWindow", "\350\247\243\347\273\221", nullptr));
#ifndef QT_NO_TOOLTIP
        m_actAbort->setToolTip(QApplication::translate("UdpWindow", "\350\247\243\347\273\221", nullptr));
#endif // QT_NO_TOOLTIP
        m_actClear->setText(QApplication::translate("UdpWindow", "\346\270\205\347\251\272", nullptr));
#ifndef QT_NO_TOOLTIP
        m_actClear->setToolTip(QApplication::translate("UdpWindow", "\346\270\205\347\251\272", nullptr));
#endif // QT_NO_TOOLTIP
        m_actExit->setText(QApplication::translate("UdpWindow", "\351\200\200\345\207\272", nullptr));
#ifndef QT_NO_TOOLTIP
        m_actExit->setToolTip(QApplication::translate("UdpWindow", "\351\200\200\345\207\272", nullptr));
#endif // QT_NO_TOOLTIP
        label->setText(QApplication::translate("UdpWindow", "\346\234\254\345\234\260\345\234\260\345\235\200:", nullptr));
        m_comboLocalAddr->setItemText(0, QApplication::translate("UdpWindow", "127.0.0.1", nullptr));
        m_comboLocalAddr->setItemText(1, QApplication::translate("UdpWindow", "0.0.0.0", nullptr));

        label_4->setText(QApplication::translate("UdpWindow", "\346\234\254\345\234\260\347\253\257\345\217\243:", nullptr));
        label_3->setText(QApplication::translate("UdpWindow", "\350\277\234\347\250\213\345\234\260\345\235\200:", nullptr));
        label_2->setText(QApplication::translate("UdpWindow", "\350\277\234\347\250\213\347\253\257\345\217\243:", nullptr));
        m_btnSend->setText(QApplication::translate("UdpWindow", "\345\217\221\351\200\201", nullptr));
        toolBar->setWindowTitle(QApplication::translate("UdpWindow", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class UdpWindow: public Ui_UdpWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UDPWINDOW_H
