#ifndef POPUPWINDOW2_H
#define POPUPWINDOW2_H

#include <QDialog>

namespace Ui {
class popupwindow2;
}

class popupwindow2 : public QDialog
{
    Q_OBJECT

public:
    explicit popupwindow2(QWidget *parent = nullptr);
    ~popupwindow2();

private:
    Ui::popupwindow2 *ui;
};

#endif // POPUPWINDOW2_H
