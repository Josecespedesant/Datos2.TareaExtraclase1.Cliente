#include "popupwindowbts2.h"
#include "ui_popupwindowbts2.h"
#include "sockets.h"
#include <iostream>
using namespace std;



popupwindowbts2::popupwindowbts2(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::popupwindowbts2)
{
    ui->setupUi(this);
}

popupwindowbts2::~popupwindowbts2()
{
    delete ui;
}

void popupwindowbts2::on_pushButton_clicked()
{
    if(!(ui->lineEdit->text().isEmpty()) && checkAllInteger(ui->lineEdit)){
    Sockets *s = new Sockets();
    string data = "m" + ui->lineEdit->text().toStdString();

    char cstr[data.size()+1];
    cstr[data.size()] = '\0';

    strcpy(cstr, data.c_str());

    s->sendMessage(cstr);


    memset(cstr,0, sizeof (cstr));
    ui->lineEdit->clear();
    hide();
    }
    else{
        ui->lineEdit->clear();
        ui->label->setText("Please insert a number you want to delete from the tree");
    }
}

void popupwindowbts2::on_pushButton_2_clicked()
{
    hide();
}

bool popupwindowbts2::checkAllInteger(QLineEdit *text){

    string realtext = text->text().toStdString();

    std::string::const_iterator it = realtext.begin();
       while (it != realtext.end() && std::isdigit(*it)) ++it;
       return !realtext.empty() && it == realtext.end();

}
