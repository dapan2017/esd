/********************************************************************************
** Form generated from reading UI file 'timerdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TIMERDIALOG_H
#define UI_TIMERDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_TimerDialog
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLCDNumber *m_lcdHour;
    QLabel *label;
    QLCDNumber *m_lcdMinute;
    QLabel *label_2;
    QLCDNumber *m_lcdSecond;
    QLabel *label_3;
    QLCDNumber *m_lcdElapsed;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QPushButton *m_btnStart;
    QPushButton *m_btnReset;
    QSpacerItem *horizontalSpacer_2;

    void setupUi(QDialog *TimerDialog)
    {
        if (TimerDialog->objectName().isEmpty())
            TimerDialog->setObjectName(QString::fromUtf8("TimerDialog"));
        TimerDialog->resize(563, 293);
        verticalLayout = new QVBoxLayout(TimerDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        m_lcdHour = new QLCDNumber(TimerDialog);
        m_lcdHour->setObjectName(QString::fromUtf8("m_lcdHour"));
        m_lcdHour->setDigitCount(2);

        horizontalLayout->addWidget(m_lcdHour);

        label = new QLabel(TimerDialog);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font;
        font.setPointSize(33);
        label->setFont(font);

        horizontalLayout->addWidget(label);

        m_lcdMinute = new QLCDNumber(TimerDialog);
        m_lcdMinute->setObjectName(QString::fromUtf8("m_lcdMinute"));
        m_lcdMinute->setDigitCount(2);

        horizontalLayout->addWidget(m_lcdMinute);

        label_2 = new QLabel(TimerDialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setFont(font);

        horizontalLayout->addWidget(label_2);

        m_lcdSecond = new QLCDNumber(TimerDialog);
        m_lcdSecond->setObjectName(QString::fromUtf8("m_lcdSecond"));
        m_lcdSecond->setDigitCount(2);

        horizontalLayout->addWidget(m_lcdSecond);

        label_3 = new QLabel(TimerDialog);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setFont(font);

        horizontalLayout->addWidget(label_3);


        verticalLayout->addLayout(horizontalLayout);

        m_lcdElapsed = new QLCDNumber(TimerDialog);
        m_lcdElapsed->setObjectName(QString::fromUtf8("m_lcdElapsed"));
        m_lcdElapsed->setDigitCount(12);

        verticalLayout->addWidget(m_lcdElapsed);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        m_btnStart = new QPushButton(TimerDialog);
        m_btnStart->setObjectName(QString::fromUtf8("m_btnStart"));
        QFont font1;
        font1.setPointSize(22);
        m_btnStart->setFont(font1);

        horizontalLayout_2->addWidget(m_btnStart);

        m_btnReset = new QPushButton(TimerDialog);
        m_btnReset->setObjectName(QString::fromUtf8("m_btnReset"));
        m_btnReset->setFont(font1);

        horizontalLayout_2->addWidget(m_btnReset);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout_2);


        retranslateUi(TimerDialog);

        m_btnStart->setDefault(true);


        QMetaObject::connectSlotsByName(TimerDialog);
    } // setupUi

    void retranslateUi(QDialog *TimerDialog)
    {
        TimerDialog->setWindowTitle(QApplication::translate("TimerDialog", "TimerDialog", nullptr));
        label->setText(QApplication::translate("TimerDialog", "\346\227\266", nullptr));
        label_2->setText(QApplication::translate("TimerDialog", "\345\210\206", nullptr));
        label_3->setText(QApplication::translate("TimerDialog", "\347\247\222", nullptr));
        m_btnStart->setText(QApplication::translate("TimerDialog", "\345\274\200\345\247\213", nullptr));
        m_btnReset->setText(QApplication::translate("TimerDialog", "\345\244\215\344\275\215", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TimerDialog: public Ui_TimerDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TIMERDIALOG_H
