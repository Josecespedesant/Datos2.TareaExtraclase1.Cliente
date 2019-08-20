#ifndef BST_H
#define BST_H

#include <QDialog>

namespace Ui {
class bst;
}

class bst : public QDialog
{
    Q_OBJECT

public:
    explicit bst(QWidget *parent = nullptr);
    ~bst();

private slots:
    void on_pushButton_3_clicked();

    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::bst *ui;
};

#endif // BST_H
