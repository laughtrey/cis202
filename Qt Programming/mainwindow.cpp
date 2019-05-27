#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->label->setText("Hello Window");
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::changeText()
{
    ui->label->setText("Button was clicked!");
}
