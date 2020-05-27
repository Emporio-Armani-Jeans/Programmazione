//
// Created by andry on 26/05/2020.
//

#ifndef PROGETTO_TABELLA_H
#define PROGETTO_TABELLA_H
#include <vector>
#include "Record.h"
using namespace std;

template<typename T>
class Tabella {
private:
    vector<Record<T>> records;
};


#endif //PROGETTO_TABELLA_H
