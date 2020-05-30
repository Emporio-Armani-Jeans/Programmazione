#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include "Tabella.h"
#include "Storage_Elements.hpp"

template<typename T>
void add_record(const string& nome_tabella, const T& value, const string& nome_colonna);

int main() {
    int actual_key=0;

    Tabs.emplace_back("Customers");
    Colonna<float> salary("Salary");
    Colonna<int> age("Age");
    B.push_back(salary);
    A.push_back(age);
    Tabs[0].addCol("Age", 'A', A.size());
    Tabs[0].addCol("Salary",'B', B.size());



    return 0;
}

template<typename T>
void add_record(const string& nome_tabella, const T& value, const string& nome_colonna){
    //ricerca match tabella-nome_tabella
    //accesso a tabs[cercata].nomi, cerco macth con nome colonna (gestire eccezione non esistente) e salvo indice
    //salvo in tabs[carcata].tipi[indice] carattere corrispondente a tipo
    for(auto elem : Tabs.)
}