#include "linkedlist.h"
#include "ui_linkedlist.h"
#include "mainwindow.h"
#include "popupwindow.h"
#include "popupwindow2.h"
#include "popupwindow3.h"
#include "popupwindow4.h"
#include "deserealizador.h"
#include <vector>
#include "QStringListModel"
#include "QVector"
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
    popupwindow *popUi = new popupwindow;
    popUi->show();
}

void linkedlist::on_pushButton_4_clicked()
{
    popupwindow2 *popUi = new popupwindow2;
    popUi->show();
}

void linkedlist::on_pushButton_2_clicked()
{
    popupwindow3 *p = new popupwindow3;
    p->show();

}

void linkedlist::on_pushButton_3_clicked()
{
    popupwindow4 *p = new popupwindow4;
    p->show();
}

void linkedlist::on_pushButton_6_clicked()
{
    Sockets *s = new Sockets;
    s->sendMessage("p");

}
