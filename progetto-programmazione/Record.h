//
// Created by andry on 27/05/2020.
//

#ifndef PROGETTO_RECORD_H
#define PROGETTO_RECORD_H
#include "Elemento.h"

template<typename T>
class Record {
    Record();
    ~Record();
private:
    typedef struct list_elem{
        Elemento<T> e;
    }list_elem;
};


#endif //PROGETTO_RECORD_H
