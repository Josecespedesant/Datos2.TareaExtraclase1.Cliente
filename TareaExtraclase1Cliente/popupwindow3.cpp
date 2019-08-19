#include "popupwindow3.h"
#include "ui_popupwindow3.h"
#include "sockets.h"
#include <iostream>
popupwindow3::popupwindow3(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::popupwindow3)
{
    ui->setupUi(this);
}

popupwindow3::~popupwindow3()
{
    delete ui;
}

void popupwindow3::on_pushButton_clicked()
{
    Sockets *s = new Sockets();

    string str = "delete";
    char a[str.size()+1];
    strcpy(a, str.c_str());

    s->sendMessage(a);

    hide();
    delete(ui);
}

void popupwindow3::on_pushButton_2_clicked()
{
    hide();
    delete(ui);
}
