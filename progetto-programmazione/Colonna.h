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
    string getNome();
    vector<T> getElementi();
private:
    string _nome;
    vector<T> _elementi;
};

template<typename T>
string Colonna<T>::getNome() {
    return _nome;
}

template<typename T>
vector<T> Colonna<T>::getElementi() {
    return _elementi;
}


#endif //PROGETTO_COLONNA_H
