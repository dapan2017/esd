#ifndef LISTWINDOW_H
#define LISTWINDOW_H

#include <QMainWindow>
#include <QListWidgetItem>

QT_BEGIN_NAMESPACE
namespace Ui { class ListWindow; }
QT_END_NAMESPACE

class ListWindow : public QMainWindow
{
    Q_OBJECT

public:
    ListWindow(QWidget *parent = nullptr);
    ~ListWindow();

private slots:
    void on_m_actInsert_triggered();
    void on_m_actDelete_triggered();
    void on_m_actAppend_triggered();
    void on_m_actInit_triggered();
    void on_m_actClear_triggered();

    void on_m_actCheckAll_triggered();
    void on_m_actCheckNone_triggered();
    void on_m_actCheckInverse_triggered();

    void on_m_checkEditable_clicked(bool checked);

    void on_m_list_currentItemChanged(QListWidgetItem *current, QListWidgetItem *previous);



private:
    Ui::ListWindow *ui;
};
#endif // LISTWINDOW_H
