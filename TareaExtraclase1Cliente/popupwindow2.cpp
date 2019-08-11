#include "popupwindow2.h"
#include "ui_popupwindow2.h"

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
