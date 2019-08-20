#include "popupwindowbst1.h"
#include "ui_popupwindowbst1.h"
#include "sockets.h"
#include <iostream>
using namespace std;

popupwindowbst1::popupwindowbst1(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::popupwindowbst1)
{
    ui->setupUi(this);
}

popupwindowbst1::~popupwindowbst1()
{
    delete ui;
}

void popupwindowbst1::on_pushButton_clicked()
{
    if(!(ui->lineEdit->text().isEmpty()) && checkAllInteger(ui->lineEdit)){
    Sockets *s = new Sockets();
    string data = "a" + ui->lineEdit->text().toStdString();

    char cstr[data.size()+1];
    cstr[data.size()] = '\0';

    strcpy(cstr, data.c_str());

    cout<<cstr<<endl;

    s->sendMessage(cstr);


    memset(cstr,0, sizeof (cstr));
    ui->lineEdit->clear();
    hide();
    }
    else{
        ui->lineEdit->clear();
        ui->label->setText("Please insert a number you want to add to the tree");
    }
}

void popupwindowbst1::on_pushButton_2_clicked()
{
    hide();
}


bool popupwindowbst1::checkAllInteger(QLineEdit *text){

    string realtext = text->text().toStdString();

    std::string::const_iterator it = realtext.begin();
       while (it != realtext.end() && std::isdigit(*it)) ++it;
       return !realtext.empty() && it == realtext.end();

}
