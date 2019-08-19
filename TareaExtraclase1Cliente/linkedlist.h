#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include <QDialog>

namespace Ui {
class linkedlist;
}

class linkedlist : public QDialog
{
    Q_OBJECT

public:
    explicit linkedlist(QWidget *parent = nullptr);
    ~linkedlist();

private slots:
    void on_pushButton_5_clicked();

    void on_pushButton_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::linkedlist *ui;
};

#endif // LINKEDLIST_H
