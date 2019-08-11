#include "popupwindow.h"
#include "ui_popupwindow.h"
#include "linkedlist.h"
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
    linkedlist *linkUi = new linkedlist();
    linkUi->show();
    hide();
}


void popupwindow::on_pushButton_clicked()
{
    if(!(ui->textEdit->toPlainText().isEmpty()) && checkAllInteger(ui->textEdit)){
        hide();
    }else{
        ui->textEdit->clear();
        ui->label->setText("Please insert a number you want to add first");
    }
}

bool popupwindow::checkAllInteger(QTextEdit *text){

    string realtext = text->toPlainText().toStdString();

    std::string::const_iterator it = realtext.begin();
       while (it != realtext.end() && std::isdigit(*it)) ++it;
       return !realtext.empty() && it == realtext.end();

}

