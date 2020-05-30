//
// Created by andry on 26/05/2020.
//

#include "Tabella.h"

void Tabella::addCol(const string &nome_col, const char &tipo, int pos) {
    _nomi.push_back(nome_col);
    _tipi.push_back(tipo);
    _posizioni.push_back(pos-1);
}
