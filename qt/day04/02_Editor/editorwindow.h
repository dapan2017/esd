#ifndef EDITORWINDOW_H
#define EDITORWINDOW_H

#include <QMainWindow>
#include <QLabel>
#include <QSpinBox> // 选值框
#include <QFontComboBox> // 字体组合框

QT_BEGIN_NAMESPACE
namespace Ui { class EditorWindow; }
QT_END_NAMESPACE

class EditorWindow : public QMainWindow
{
    Q_OBJECT

public:
    EditorWindow(QWidget *parent = nullptr);
    ~EditorWindow();

private slots:
    // 新建/打开
    void on_m_actNew_triggered();
    void on_m_actOpen_triggered();

    // 关于
    void on_m_actAbout_triggered();

    // 粗体/斜体/下划线
    void on_m_actBold_triggered(bool checked);
    void on_m_actItalic_triggered(bool checked);
    void on_m_actUnderline_triggered(bool checked);

    // 工具栏/状态栏
    void on_m_actToolBar_triggered(bool checked);
    void on_m_actStatusBar_triggered(bool checked);

    // 是否可拷贝/文本变化/选择变化
    void on_m_edit_copyAvailable(bool b);
    void on_m_edit_textChanged();
    void on_m_edit_selectionChanged();

    // 字号槽函数 / 字体槽函数
    void on_m_spinFontSize_valueChanged(int fontSize);
    void on_m_combFontName_currentIndexChanged(const QString& fontName);

private:
    Ui::EditorWindow *ui;
    QFontComboBox* m_combFontName; // 字体组合框
    QSpinBox* m_spinFontSize; // 字号
    QLabel* m_labCurFile; // 当前文件
};
#endif // EDITORWINDOW_H
