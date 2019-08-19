#include "popupwindow2.h"
#include "ui_popupwindow2.h"
#include "sockets.h"
using namespace std;

popupwindow2::popupwindow2(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::popupwindow2)
{
    ui->setupUi(this);
}

popupwindow2::~popupwindow2()
{
    delete ui;
}

void popupwindow2::on_pushButton_clicked()
{
    if(!(ui->lineEdit->text().isEmpty()) && checkAllInteger(ui->lineEdit) && !(ui->lineEdit_2->text().isEmpty()) && checkAllInteger(ui->lineEdit_2)){
        Sockets *s = new Sockets();
        string data = "c" + ui->lineEdit->text().toStdString() + "_" + ui->lineEdit_2->text().toStdString();
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
        ui->label->setText("Please insert the position and value of the list you want to change.");
    }
}

bool popupwindow2::checkAllInteger(QLineEdit *text){
    string realtext = text->text().toStdString();
    std::string::const_iterator it = realtext.begin();
       while (it != realtext.end() && std::isdigit(*it)) ++it;
       return !realtext.empty() && it == realtext.end();
}
