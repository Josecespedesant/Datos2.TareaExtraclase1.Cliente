#ifndef POPUPWINDOW3_H
#define POPUPWINDOW3_H

#include <QDialog>

/*!
 *Declaración de la clase de la interfaz gráfica de popupwindow3
 */

namespace Ui {
class popupwindow3;
}

class popupwindow3 : public QDialog
{
    Q_OBJECT

public:
    explicit popupwindow3(QWidget *parent = nullptr);
    ~popupwindow3();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::popupwindow3 *ui;
};

#endif // POPUPWINDOW3_H
