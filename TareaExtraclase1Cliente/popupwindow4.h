#ifndef POPUPWINDOW4_H
#define POPUPWINDOW4_H

#include <QDialog>
#include "QLineEdit"

namespace Ui {
class popupwindow4;
}

class popupwindow4 : public QDialog
{
    Q_OBJECT

public:
    explicit popupwindow4(QWidget *parent = nullptr);
    bool checkAllInteger(QLineEdit *text);
    ~popupwindow4();

private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

private:
    Ui::popupwindow4 *ui;
};

#endif // POPUPWINDOW4_H
