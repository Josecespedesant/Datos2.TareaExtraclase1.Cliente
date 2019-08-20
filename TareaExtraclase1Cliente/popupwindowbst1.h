#ifndef POPUPWINDOWBST1_H
#define POPUPWINDOWBST1_H

#include <QDialog>
#include "QLineEdit"

namespace Ui {
class popupwindowbst1;
}

class popupwindowbst1 : public QDialog
{
    Q_OBJECT

public:
    explicit popupwindowbst1(QWidget *parent = nullptr);
    ~popupwindowbst1();

private slots:
    void on_pushButton_clicked();
    bool checkAllInteger(QLineEdit *text);
    void on_pushButton_2_clicked();

private:
    Ui::popupwindowbst1 *ui;
};

#endif // POPUPWINDOWBST1_H
