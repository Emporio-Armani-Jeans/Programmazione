//
// Created by andry on 29/05/2020.
//

#ifndef PROGETTO_COLONNA_H
#define PROGETTO_COLONNA_H
#include <string>
#include <vector>

using namespace std;

template<typename T>
class Colonna {
public:
    explicit Colonna(const string& nome) {_nome=nome;}
private:
    string _nome;
    vector<T> _elementi;
};


#endif //PROGETTO_COLONNA_H
