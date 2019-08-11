#include "bst.h"
#include "ui_bst.h"
#include "mainwindow.h"
bst::bst(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::bst)
{
    ui->setupUi(this);
}

bst::~bst()
{
    delete ui;
}

void bst::on_pushButton_3_clicked()
{
    MainWindow *mUi = new MainWindow();
    mUi->show();
    hide();
}
