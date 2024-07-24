#ifndef DATETIMEDIALOG_H
#define DATETIMEDIALOG_H

#include <QDialog>

QT_BEGIN_NAMESPACE
namespace Ui { class DateTimeDialog; }
QT_END_NAMESPACE

class DateTimeDialog : public QDialog
{
    Q_OBJECT

public:
    DateTimeDialog(QWidget *parent = nullptr);
    ~DateTimeDialog();

private slots:
    void on_m_calendar_selectionChanged();

    void on_m_btnGet_clicked();

    void on_m_btnSet_clicked();

private:
    Ui::DateTimeDialog *ui;
};
#endif // DATETIMEDIALOG_H
