#ifndef POPUPWINDOW_H
#define POPUPWINDOW_H

#include <QDialog>
#include "QLineEdit"

/*!
 *Declaración de la clase de la interfaz gráfica de popupwindow
 */

namespace Ui {
class popupwindow;
}

class popupwindow : public QDialog
{
    Q_OBJECT

public:
    explicit popupwindow(QWidget *parent = nullptr);
    bool checkAllInteger(QLineEdit *text);
    ~popupwindow();

private slots:
    void on_pushButton_2_clicked();
    void on_pushButton_clicked();
    void on_lineEdit_editingFinished();

private:
    Ui::popupwindow *ui;
};

#endif // POPUPWINDOW_H
