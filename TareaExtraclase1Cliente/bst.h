#ifndef BST_H
#define BST_H

/*!
  Declaración de la clase bst
  */

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
    /*!
      Devuelve a la pantalla de inicio.
     * \brief on_pushButton_3_clicked
     */
    void on_pushButton_3_clicked();

    /*!
      Abre la ventana para añadir un elemento al arbol binario de busqueda.
     * \brief on_pushButton_clicked
     */
    void on_pushButton_clicked();

    /*!
      Abre la venta para eliminar un elemento del arbol binario de busqueda.
     * \brief on_pushButton_2_clicked
     */
    void on_pushButton_2_clicked();

private:
    Ui::bst *ui;
};

#endif // BST_H
