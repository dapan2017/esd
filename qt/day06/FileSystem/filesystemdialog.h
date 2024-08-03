#ifndef FILESYSTEMDIALOG_H
#define FILESYSTEMDIALOG_H

#include <QDialog>
#include <QFileSystemModel>

QT_BEGIN_NAMESPACE
namespace Ui { class FileSystemDialog; }
QT_END_NAMESPACE

class FileSystemDialog : public QDialog
{
    Q_OBJECT

public:
    FileSystemDialog(QWidget *parent = nullptr);
    ~FileSystemDialog();

private slots:
    void on_m_tree_clicked(const QModelIndex &index);
    void on_m_table_clicked(const QModelIndex &index);
    void on_m_list_clicked(const QModelIndex &index);

private:
    //选中某个文件的时候, 更新下面的几个label
    void updateLabels(QModelIndex const& index);

    Ui::FileSystemDialog *ui;
    //文件系统对象指针
    QFileSystemModel* m_model;
};
#endif // FILESYSTEMDIALOG_H
