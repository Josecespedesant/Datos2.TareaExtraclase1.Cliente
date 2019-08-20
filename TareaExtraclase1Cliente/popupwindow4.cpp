#include "popupwindow4.h"
#include "ui_popupwindow4.h"
#include "sockets.h"
using namespace std;

popupwindow4::popupwindow4(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::popupwindow4)
{
    ui->setupUi(this);
}

popupwindow4::~popupwindow4()
{
    delete ui;
}

void popupwindow4::on_pushButton_2_clicked()
{
    hide();
}



void popupwindow4::on_pushButton_clicked()
{
    if(!(ui->lineEdit->text().isEmpty()) && checkAllInteger(ui->lineEdit)){
        Sockets *s = new Sockets();
        string data = "g" + ui->lineEdit->text().toStdString();
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
        ui->label->setText("Please insert the position as an integer");
    }
}


bool popupwindow4::checkAllInteger(QLineEdit *text){

    string realtext = text->text().toStdString();

    std::string::const_iterator it = realtext.begin();
       while (it != realtext.end() && std::isdigit(*it)) ++it;
       return !realtext.empty() && it == realtext.end();

}

