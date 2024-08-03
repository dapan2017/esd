/********************************************************************************
** Form generated from reading UI file 'filesystemdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FILESYSTEMDIALOG_H
#define UI_FILESYSTEMDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListView>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QTableView>
#include <QtWidgets/QTreeView>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_FileSystemDialog
{
public:
    QVBoxLayout *verticalLayout;
    QSplitter *m_splitterHor;
    QSplitter *m_splitterVer;
    QTreeView *m_tree;
    QTableView *m_table;
    QListView *m_list;
    QHBoxLayout *horizontalLayout;
    QLabel *m_labFileName;
    QLabel *m_labFileSize;
    QLabel *m_labFileType;
    QCheckBox *m_checkDir;
    QLabel *m_labFilePath;

    void setupUi(QDialog *FileSystemDialog)
    {
        if (FileSystemDialog->objectName().isEmpty())
            FileSystemDialog->setObjectName(QString::fromUtf8("FileSystemDialog"));
        FileSystemDialog->resize(600, 450);
        verticalLayout = new QVBoxLayout(FileSystemDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        m_splitterHor = new QSplitter(FileSystemDialog);
        m_splitterHor->setObjectName(QString::fromUtf8("m_splitterHor"));
        m_splitterHor->setOrientation(Qt::Horizontal);
        m_splitterVer = new QSplitter(m_splitterHor);
        m_splitterVer->setObjectName(QString::fromUtf8("m_splitterVer"));
        m_splitterVer->setOrientation(Qt::Vertical);
        m_tree = new QTreeView(m_splitterVer);
        m_tree->setObjectName(QString::fromUtf8("m_tree"));
        m_tree->setFrameShape(QFrame::WinPanel);
        m_splitterVer->addWidget(m_tree);
        m_table = new QTableView(m_splitterVer);
        m_table->setObjectName(QString::fromUtf8("m_table"));
        m_table->setFrameShape(QFrame::WinPanel);
        m_splitterVer->addWidget(m_table);
        m_splitterHor->addWidget(m_splitterVer);
        m_list = new QListView(m_splitterHor);
        m_list->setObjectName(QString::fromUtf8("m_list"));
        m_list->setFrameShape(QFrame::WinPanel);
        m_splitterHor->addWidget(m_list);

        verticalLayout->addWidget(m_splitterHor);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        m_labFileName = new QLabel(FileSystemDialog);
        m_labFileName->setObjectName(QString::fromUtf8("m_labFileName"));
        m_labFileName->setFrameShape(QFrame::WinPanel);
        m_labFileName->setFrameShadow(QFrame::Sunken);

        horizontalLayout->addWidget(m_labFileName);

        m_labFileSize = new QLabel(FileSystemDialog);
        m_labFileSize->setObjectName(QString::fromUtf8("m_labFileSize"));
        m_labFileSize->setFrameShape(QFrame::WinPanel);
        m_labFileSize->setFrameShadow(QFrame::Sunken);

        horizontalLayout->addWidget(m_labFileSize);

        m_labFileType = new QLabel(FileSystemDialog);
        m_labFileType->setObjectName(QString::fromUtf8("m_labFileType"));
        m_labFileType->setFrameShape(QFrame::WinPanel);
        m_labFileType->setFrameShadow(QFrame::Sunken);

        horizontalLayout->addWidget(m_labFileType);

        m_checkDir = new QCheckBox(FileSystemDialog);
        m_checkDir->setObjectName(QString::fromUtf8("m_checkDir"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(m_checkDir->sizePolicy().hasHeightForWidth());
        m_checkDir->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(m_checkDir);


        verticalLayout->addLayout(horizontalLayout);

        m_labFilePath = new QLabel(FileSystemDialog);
        m_labFilePath->setObjectName(QString::fromUtf8("m_labFilePath"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(m_labFilePath->sizePolicy().hasHeightForWidth());
        m_labFilePath->setSizePolicy(sizePolicy1);
        m_labFilePath->setFrameShape(QFrame::WinPanel);
        m_labFilePath->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(m_labFilePath);


        retranslateUi(FileSystemDialog);
        QObject::connect(m_tree, SIGNAL(clicked(QModelIndex)), m_table, SLOT(setRootIndex(QModelIndex)));
        QObject::connect(m_tree, SIGNAL(clicked(QModelIndex)), m_list, SLOT(setRootIndex(QModelIndex)));

        QMetaObject::connectSlotsByName(FileSystemDialog);
    } // setupUi

    void retranslateUi(QDialog *FileSystemDialog)
    {
        FileSystemDialog->setWindowTitle(QApplication::translate("FileSystemDialog", "\346\226\207\344\273\266\347\263\273\347\273\237", nullptr));
        m_labFileName->setText(QString());
        m_labFileSize->setText(QString());
        m_labFileType->setText(QString());
        m_checkDir->setText(QApplication::translate("FileSystemDialog", "\347\233\256\345\275\225", nullptr));
        m_labFilePath->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class FileSystemDialog: public Ui_FileSystemDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FILESYSTEMDIALOG_H
