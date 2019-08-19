#include "popupwindow.h"
#include "ui_popupwindow.h"
#include "linkedlist.h"
#include "sockets.h"
#include <iostream>
using namespace std;


popupwindow::popupwindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::popupwindow)
{
    ui->setupUi(this);
}

popupwindow::~popupwindow()
{
    delete ui;
}

void popupwindow::on_pushButton_2_clicked()
{
    hide();
}


void popupwindow::on_pushButton_clicked()
{
    if(!(ui->lineEdit->text().isEmpty()) && checkAllInteger(ui->lineEdit)){
        Sockets *s = new Sockets();
        string data = "i" + ui->lineEdit->text().toStdString();
        char cstr[data.size()+1];
        strcpy(cstr, data.c_str());

        s->sendMessage(cstr);

        memset(cstr,0, sizeof (cstr));
        data = "";
        ui->lineEdit->clear();
        hide();
        delete(ui);

    }else{
        ui->lineEdit->clear();
        ui->label->setText("Please insert a number you want to add first");
    }
}

bool popupwindow::checkAllInteger(QLineEdit *text){

    string realtext = text->text().toStdString();

    std::string::const_iterator it = realtext.begin();
       while (it != realtext.end() && std::isdigit(*it)) ++it;
       return !realtext.empty() && it == realtext.end();

}
