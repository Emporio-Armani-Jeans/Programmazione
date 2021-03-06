//
// Created by andry on 26/05/2020.
//

#ifndef PROGETTO_TABELLA_H
#define PROGETTO_TABELLA_H
#include <vector>
#include "Colonna.h"

using namespace std;

class Tabella {
public:
    explicit Tabella(const string& nome) { _nome=nome; }

    void addCol(const string& nome_col, const char& tipo, int pos);

    string getNome();
    vector<string> getNomiColonne();
    vector<char> getTipi();

private:
    string _nome; //nome della tabella
    vector<char> _tipi; //tipi delle colonne della tabella
    vector<int> _posizioni;  //indici che indicano a quale elemento del vect corrisponde ogni colonna
    vector<string> _nomi;//nomi colonne
};


#endif //PROGETTO_TABELLA_H
