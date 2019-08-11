#include "linkedlist.h"
#include "ui_linkedlist.h"
#include "mainwindow.h"
#include "popupwindow.h"
linkedlist::linkedlist(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::linkedlist)
{
    ui->setupUi(this);
}

linkedlist::~linkedlist()
{
    delete ui;
}

void linkedlist::on_pushButton_5_clicked()
{
    MainWindow *mUi = new MainWindow();
    mUi->show();
    hide();
}

void linkedlist::on_pushButton_clicked()
{
    popupwindow *popUi = new popupwindow();
    popUi->show();
}
