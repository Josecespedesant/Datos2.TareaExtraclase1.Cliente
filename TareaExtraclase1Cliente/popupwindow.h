#ifndef POPUPWINDOW_H
#define POPUPWINDOW_H

#include <QDialog>
#include "QTextEdit"
namespace Ui {
class popupwindow;
}

class popupwindow : public QDialog
{
    Q_OBJECT

public:
    explicit popupwindow(QWidget *parent = nullptr);
    bool checkAllInteger(QTextEdit *text);
    ~popupwindow();

private slots:
    void on_pushButton_2_clicked();
    void on_pushButton_clicked();
private:
    Ui::popupwindow *ui;
};

#endif // POPUPWINDOW_H
