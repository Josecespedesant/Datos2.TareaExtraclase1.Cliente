#include "bst.h"
#include "ui_bst.h"
#include "mainwindow.h"
#include "popupwindowbst1.h"
#include "popupwindowbts2.h"

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



void bst::on_pushButton_clicked()
{
    popupwindowbst1 *pop = new popupwindowbst1;
    pop->show();
}

void bst::on_pushButton_2_clicked()
{
    popupwindowbts2 *pop = new popupwindowbts2;
    pop->show();
}
