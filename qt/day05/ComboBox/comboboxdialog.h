#ifndef COMBOBOXDIALOG_H
#define COMBOBOXDIALOG_H

#include <QDialog>

QT_BEGIN_NAMESPACE
namespace Ui { class ComboBoxDialog; }
QT_END_NAMESPACE

class ComboBoxDialog : public QDialog
{
    Q_OBJECT

public:
    ComboBoxDialog(QWidget *parent = nullptr);
    ~ComboBoxDialog();

private slots:

    void on_m_btnInit_clicked();
    void on_m_btnClear_clicked();
    void on_m_btnAdd_clicked();
    void on_m_btnAppend_clicked();
    void on_m_btnErase_clicked();

    void on_m_checkEditable_clicked(bool checked);
    void on_m_checkReadOnly_clicked(bool checked);

    void on_m_comboUserData_currentIndexChanged(const QString &arg1);
    void on_m_comboSimple_currentIndexChanged(const QString &arg1);
private:
    Ui::ComboBoxDialog *ui;
};
#endif // COMBOBOXDIALOG_H
