/********************************************************************************
** Form generated from reading UI file 'datetimedialog.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DATETIMEDIALOG_H
#define UI_DATETIMEDIALOG_H

#include <QtCore/QDate>
#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCalendarWidget>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDateTimeEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTimeEdit>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_DateTimeDialog
{
public:
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout;
    QDateEdit *m_dateEdit;
    QLineEdit *m_editDate;
    QTimeEdit *m_timeEdit;
    QLineEdit *m_editTime;
    QDateTimeEdit *m_datetimeEdit;
    QLineEdit *m_editDateTime;
    QHBoxLayout *horizontalLayout;
    QPushButton *m_btnGet;
    QPushButton *m_btnSet;
    QLineEdit *m_editCalendar;
    QCalendarWidget *m_calendar;

    void setupUi(QDialog *DateTimeDialog)
    {
        if (DateTimeDialog->objectName().isEmpty())
            DateTimeDialog->setObjectName(QString::fromUtf8("DateTimeDialog"));
        DateTimeDialog->resize(380, 426);
        verticalLayout = new QVBoxLayout(DateTimeDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        m_dateEdit = new QDateEdit(DateTimeDialog);
        m_dateEdit->setObjectName(QString::fromUtf8("m_dateEdit"));

        gridLayout->addWidget(m_dateEdit, 0, 0, 1, 1);

        m_editDate = new QLineEdit(DateTimeDialog);
        m_editDate->setObjectName(QString::fromUtf8("m_editDate"));

        gridLayout->addWidget(m_editDate, 0, 1, 1, 1);

        m_timeEdit = new QTimeEdit(DateTimeDialog);
        m_timeEdit->setObjectName(QString::fromUtf8("m_timeEdit"));

        gridLayout->addWidget(m_timeEdit, 1, 0, 1, 1);

        m_editTime = new QLineEdit(DateTimeDialog);
        m_editTime->setObjectName(QString::fromUtf8("m_editTime"));

        gridLayout->addWidget(m_editTime, 1, 1, 1, 1);

        m_datetimeEdit = new QDateTimeEdit(DateTimeDialog);
        m_datetimeEdit->setObjectName(QString::fromUtf8("m_datetimeEdit"));

        gridLayout->addWidget(m_datetimeEdit, 2, 0, 1, 1);

        m_editDateTime = new QLineEdit(DateTimeDialog);
        m_editDateTime->setObjectName(QString::fromUtf8("m_editDateTime"));

        gridLayout->addWidget(m_editDateTime, 2, 1, 1, 1);


        verticalLayout->addLayout(gridLayout);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        m_btnGet = new QPushButton(DateTimeDialog);
        m_btnGet->setObjectName(QString::fromUtf8("m_btnGet"));

        horizontalLayout->addWidget(m_btnGet);

        m_btnSet = new QPushButton(DateTimeDialog);
        m_btnSet->setObjectName(QString::fromUtf8("m_btnSet"));

        horizontalLayout->addWidget(m_btnSet);


        verticalLayout->addLayout(horizontalLayout);

        m_editCalendar = new QLineEdit(DateTimeDialog);
        m_editCalendar->setObjectName(QString::fromUtf8("m_editCalendar"));
        m_editCalendar->setAlignment(Qt::AlignCenter);
        m_editCalendar->setReadOnly(true);

        verticalLayout->addWidget(m_editCalendar);

        m_calendar = new QCalendarWidget(DateTimeDialog);
        m_calendar->setObjectName(QString::fromUtf8("m_calendar"));
        m_calendar->setSelectedDate(QDate(2024, 7, 24));
        m_calendar->setFirstDayOfWeek(Qt::Sunday);
        m_calendar->setGridVisible(true);
        m_calendar->setHorizontalHeaderFormat(QCalendarWidget::ShortDayNames);
        m_calendar->setVerticalHeaderFormat(QCalendarWidget::NoVerticalHeader);

        verticalLayout->addWidget(m_calendar);


        retranslateUi(DateTimeDialog);

        QMetaObject::connectSlotsByName(DateTimeDialog);
    } // setupUi

    void retranslateUi(QDialog *DateTimeDialog)
    {
        DateTimeDialog->setWindowTitle(QApplication::translate("DateTimeDialog", "DateTimeDialog", nullptr));
        m_dateEdit->setDisplayFormat(QApplication::translate("DateTimeDialog", "yyyy-MM-dd", nullptr));
        m_timeEdit->setDisplayFormat(QApplication::translate("DateTimeDialog", "HH:mm:ss", nullptr));
        m_datetimeEdit->setDisplayFormat(QApplication::translate("DateTimeDialog", "yyyy-MM-dd HH:mm:ss", nullptr));
        m_btnGet->setText(QApplication::translate("DateTimeDialog", "\350\216\267\345\217\226", nullptr));
        m_btnSet->setText(QApplication::translate("DateTimeDialog", "\350\256\276\347\275\256", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DateTimeDialog: public Ui_DateTimeDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DATETIMEDIALOG_H
