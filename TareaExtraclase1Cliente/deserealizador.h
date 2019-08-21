//
// Created by josecespedes on 7/8/19.
//

#ifndef DATOS2_TAREA_EXTRACLASE_1_CLIENTE_DESEREALIZADOR_H
#define DATOS2_TAREA_EXTRACLASE_1_CLIENTE_DESEREALIZADOR_H
#include <vector>

/*!
 * Declaración de la clase deserealizador
 */

using namespace std;

class Deserealizador {

private:
    vector<int> *parsedList;

public:
    /*!
      Constructor de la clase Deserealizador, convierte el char de la lista en un vector.
     * \brief Deserealizador
     * \param listToParse
     */
    Deserealizador(char listToParse[]);
    /*!
      Imprime la lista.
     * \brief printList
     */
    void printList();
    /*!
      Devuelve el vector de la lista enlazada.
     * \brief getParsedList
     * \return list as vector
     */
    vector<int>* getParsedList();
};


#endif //DATOS2_TAREA_EXTRACLASE_1_CLIENTE_DESEREALIZADOR_H
