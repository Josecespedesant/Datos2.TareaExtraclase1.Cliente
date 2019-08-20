#ifndef POPUPWINDOWBTS2_H
#define POPUPWINDOWBTS2_H

#include <QDialog>
#include "QLineEdit"
namespace Ui {
class popupwindowbts2;
}

class popupwindowbts2 : public QDialog
{
    Q_OBJECT

public:
    explicit popupwindowbts2(QWidget *parent = nullptr);
    ~popupwindowbts2();

private slots:
    void on_pushButton_clicked();
    bool checkAllInteger(QLineEdit *text);
    void on_pushButton_2_clicked();

private:
    Ui::popupwindowbts2 *ui;
};

#endif // POPUPWINDOWBTS2_H
