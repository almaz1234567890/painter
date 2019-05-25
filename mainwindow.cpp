#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    is_clicked(false),
    ui(new Ui::MainWindow)

{
    ui->setupUi(this);
}

void MainWindow::mousePressEvent(QMouseEvent* e)
{
    this->is_clicked = true;
}




MainWindow::~MainWindow()
{
    delete ui;
}
