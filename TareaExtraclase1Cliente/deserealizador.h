//
// Created by josecespedes on 7/8/19.
//

#ifndef DATOS2_TAREA_EXTRACLASE_1_CLIENTE_DESEREALIZADOR_H
#define DATOS2_TAREA_EXTRACLASE_1_CLIENTE_DESEREALIZADOR_H
#include <vector>

using namespace std;

class Deserealizador {

private:
    vector<int> *parsedList;

public:
    Deserealizador(char listToParse[]);
    void printList();
    vector<int>* getParsedList();
};


#endif //DATOS2_TAREA_EXTRACLASE_1_CLIENTE_DESEREALIZADOR_H
