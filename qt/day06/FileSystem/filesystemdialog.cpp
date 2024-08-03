#include <QDir>

#include "filesystemdialog.h"
#include "ui_filesystemdialog.h"

/*
    1.m_model - 文件系统模型

*/
FileSystemDialog::FileSystemDialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::FileSystemDialog)
    , m_model(new QFileSystemModel(this))
{
    ui->setupUi(this);


    //分裂器:第0个对象:第1个对象 - 3:2
    ui->m_splitterVer->setStretchFactor(0, 3);
    ui->m_splitterVer->setStretchFactor(1, 2);

    //分裂器:第0个对象:第1个对象 - 80:53
    ui->m_splitterHor->setStretchFactor(0, 80);
    ui->m_splitterHor->setStretchFactor(1, 53);

    m_model->setRootPath(QDir::currentPath());
    //m_tree就是treeview使用过的是m_model模型
    ui->m_tree->setModel(m_model);
    ui->m_table->setModel(m_model);
    ui->m_list->setModel(m_model);
}

FileSystemDialog::~FileSystemDialog()
{
    delete ui;
}

void FileSystemDialog::on_m_tree_clicked(const QModelIndex &index)
{
    updateLabels(index);
}

void FileSystemDialog::on_m_table_clicked(const QModelIndex &index)
{
    updateLabels(index);
}

void FileSystemDialog::on_m_list_clicked(const QModelIndex &index)
{
    updateLabels(index);
}

//点击文件后 - 调用该函数
//参数 - 点击的文件的模型索引
void FileSystemDialog::updateLabels(QModelIndex const& index)
{
    //m_model->fileName(index)
    ui->m_labFileName->setText(m_model->fileName(index));
    ui->m_labFileSize->setText(
        QString("%1 Bytes").arg(m_model->size(index)));
    ui->m_labFileType->setText(m_model->type(index));
    ui->m_checkDir->setChecked(m_model->isDir(index));
    ui->m_labFilePath->setText(m_model->filePath(index));
}
