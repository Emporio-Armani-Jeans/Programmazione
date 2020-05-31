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
    Tabs[0].addCol(age.getNome(), 'A', A.size());
    Tabs[0].addCol(salary.getNome(),'B', B.size());

    add_record("Customers", 33,"Age");

    //cout<<age.getElementi()[0];
    cout<<A[0].getElementi()[0];


    return 0;
}

template<typename T>
void add_record(const string& nome_tabella, const T& value, const string& nome_colonna){
    //ricerca match tabella-nome_tabella
    //accesso a tabs[cercata].nomi, cerco macth con nome colonna (gestire eccezione non esistente) e salvo indice
    //salvo in tabs[carcata].tipi[indice] carattere corrispondente a tipo
    int index_colonna_cercata = 0;
    for(auto elem : Tabs){
        if (elem.getNome() == nome_tabella){
            int j = 0;
            for (auto elem_2 : elem.getNomiColonne()){
                if (elem_2 == nome_colonna){
                    index_colonna_cercata = j;
                }
                j++;
            }
            char tipo = elem.getTipi()[index_colonna_cercata];
            switch (tipo){
                case 'A' :
                    A[index_colonna_cercata].getElementi().push_back(value);
                    break;
                case 'B':
                    B[index_colonna_cercata].getElementi().push_back(value);
                    break;
                    /* inserire tutti gli altri tipi*/
                default:
                    //inserire eccezione;
                    break;
            }
        }
    }
}