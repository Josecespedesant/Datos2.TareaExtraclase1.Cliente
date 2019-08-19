#ifndef POPUPWINDOW2_H
#define POPUPWINDOW2_H

#include <QDialog>
#include "QLineEdit"

namespace Ui {
class popupwindow2;
}

class popupwindow2 : public QDialog
{
    Q_OBJECT

public:
    explicit popupwindow2(QWidget *parent = nullptr);
    bool checkAllInteger(QLineEdit *text);
    ~popupwindow2();

private slots:
    void on_pushButton_clicked();

    void on_lineEdit_cursorPositionChanged(int arg1, int arg2);

private:
    Ui::popupwindow2 *ui;
};

#endif // POPUPWINDOW2_H
