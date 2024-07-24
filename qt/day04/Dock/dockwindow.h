#ifndef DOCKWINDOW_H
#define DOCKWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class DockWindow; }
QT_END_NAMESPACE

class DockWindow : public QMainWindow
{
    Q_OBJECT

public:
    DockWindow(QWidget *parent = nullptr);
    ~DockWindow();

private:
    Ui::DockWindow *ui;
};
#endif // DOCKWINDOW_H
