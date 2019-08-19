#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "linkedlist.h"
#include "bst.h"
#include "sockets.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
   linkedlist *linkUi = new linkedlist();
   linkUi->show();
   hide();
}

void MainWindow::on_pushButton_2_clicked()
{
    bst *bstUi = new bst();
    bstUi->show();
    hide();
}
