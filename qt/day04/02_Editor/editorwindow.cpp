#include "editorwindow.h"
#include "ui_editorwindow.h"

#include <QMessageBox>

EditorWindow::EditorWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::EditorWindow)
{
    ui->setupUi(this);

    // 设置m_edit为中心控件
    setCentralWidget(ui->m_edit);

    // 工具栏中添加分隔符
    ui->toolBar->addSeparator();

    // 工具栏: 字体大小:  选值框 字体: 字体组合框
    // 字体大小:
    ui->toolBar->addWidget(new QLabel(" 字体大小:  "));
    // 字号选值框
    m_spinFontSize = new QSpinBox;
    m_spinFontSize->setMinimumWidth(60);
    // 设置字号的范围
    m_spinFontSize->setRange(8, 80);
    ui->toolBar->addWidget(m_spinFontSize);
    // 字体:
    ui->toolBar->addWidget(new QLabel(" 字体:  "));
    // 字体组合框
    m_combFontName = new QFontComboBox;
    m_combFontName->setMinimumWidth(80);
    ui->toolBar->addWidget(m_combFontName);

    // 状态栏 : 当前文件
    m_labCurFile = new QLabel("当前文件: ");
    m_labCurFile->setMinimumWidth(80);
    ui->statusbar->addWidget(m_labCurFile);

    // 建立信号和槽连接
    //connect(m_spinFontSize, SIGNAL(valueChanged(int)));
    connect(m_spinFontSize, SIGNAL(valueChanged(int)),
                this, SLOT(on_m_spinFontSize_valueChanged(int)));
    connect(m_combFontName, SIGNAL(currentIndexChanged(QString)),
                this, SLOT(on_m_combFontName_currentIndexChanged(QString)));
}

EditorWindow::~EditorWindow()
{
    delete ui;
}


void EditorWindow::on_m_actNew_triggered()
{
    QMessageBox::information(this, windowTitle(), " 新建文件...");
}

void EditorWindow::on_m_actOpen_triggered()
{
    QMessageBox::information(this, windowTitle(), " 打开文件...");
}

void EditorWindow::on_m_actAbout_triggered()
{
    QMessageBox::about(this, windowTitle(), " 混合UI设计 1.0 版本");
}

// checked : 真,粗体; 假,普通
void EditorWindow::on_m_actBold_triggered(bool checked)
{
    QTextCharFormat fmt; // 存储字符格式信息
    fmt.setFontWeight(checked ? QFont::Bold : QFont::Normal);
    // 将设置到的fmt作用于当前选中的文字
    ui->m_edit->mergeCurrentCharFormat(fmt);
}

void EditorWindow::on_m_actItalic_triggered(bool checked)
{
    QTextCharFormat fmt; // 存储字符格式信息
    fmt.setFontItalic(checked);
    // 将设置到的fmt作用于当前选中的文字
    ui->m_edit->mergeCurrentCharFormat(fmt);
}

void EditorWindow::on_m_actUnderline_triggered(bool checked)
{
    QTextCharFormat fmt; // 存储字符格式信息
    fmt.setFontUnderline(checked);
    // 将设置到的fmt作用于当前选中的文字
    ui->m_edit->mergeCurrentCharFormat(fmt);
}

// checked,真,工具栏显示; 假,工具栏不显示;
void EditorWindow::on_m_actToolBar_triggered(bool checked)
{
    ui->toolBar->setHidden(!checked);
}

void EditorWindow::on_m_actStatusBar_triggered(bool checked)
{
    ui->statusbar->setHidden(!checked);
}

// m_edit中的内容是否可拷贝 - m_actCut / m_actCopy
void EditorWindow::on_m_edit_copyAvailable(bool b)
{
    ui->m_actCut->setEnabled(b);
    ui->m_actCopy->setEnabled(b);
}

// 文本变化
// 如果在m_edit中有文本 - 使能clear动作
void EditorWindow::on_m_edit_textChanged()
{
    // 获取m_edit中文本个数
    ui->m_actClear->setEnabled( ui->m_edit->toPlainText().size());
}

// 选中的信息作用于 : 粗体/斜体/下划线
void EditorWindow::on_m_edit_selectionChanged()
{
    QFont font = ui->m_edit->currentFont(); // 获取当前选中内容, 返回其字体

    ui->m_actBold->setChecked( font.bold());
    ui->m_actItalic->setChecked(font.italic());
    ui->m_actUnderline->setChecked(font.underline());
    // 参数是字号的大小
    m_spinFontSize->setValue(font.pointSize());
    // 将当前选中的字体作用于字体选值框
    m_combFontName->setCurrentFont(font);

}

// 参数 : 要设置的字号
void EditorWindow::on_m_spinFontSize_valueChanged(int fontSize)
{
    QTextCharFormat fmt;
    fmt = ui->m_edit->currentCharFormat();
    fmt.setFontPointSize(fontSize);
    ui->m_edit->mergeCurrentCharFormat(fmt);
}
// 参数 : 要设置的字体名称
void EditorWindow::on_m_combFontName_currentIndexChanged(const QString& fontName)
{
    QTextCharFormat fmt;
    fmt = ui->m_edit->currentCharFormat();
    fmt.setFontFamily(fontName); // 要设置的字体
    ui->m_edit->mergeCurrentCharFormat(fmt);
}
