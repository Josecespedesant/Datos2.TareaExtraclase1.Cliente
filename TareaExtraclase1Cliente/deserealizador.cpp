//
// Created by josecespedes on 7/8/19.
//
#include "deserealizador.h"
#include <iostream>
#include <string.h>

Deserealizador::Deserealizador(char listToParse[]) {


    parsedList = new vector<int>();

    int i = 0;

    while(i< strlen(listToParse)){
        string nodeAsString = "";

        while(listToParse[i] != '_'){
            nodeAsString += listToParse[i];
            i++;
        }

        int nodeAsInt = stoi(nodeAsString);
        parsedList->push_back(nodeAsInt);
        i++;
    }

    for(int j=0; j<parsedList->size();j++){
        cout << parsedList->at(j) << endl;
    }


}
