#include "dockwindow.h"
#include "ui_dockwindow.h"

DockWindow::DockWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::DockWindow)
{
    ui->setupUi(this);
}

DockWindow::~DockWindow()
{
    delete ui;
}

