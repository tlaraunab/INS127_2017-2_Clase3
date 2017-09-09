#include "Nodo.h"

typedef struct {
    Nodo* first;
    Nodo* end;
    int tamano;
} Lista;

Lista* crear(){
    Lista* pivote = (Lista *) malloc(sizeof(Lista));
    pivote->tamano = 0;
    pivote->first = NULL;
    pivote->end = NULL;
    
    return pivote;
}

void insertar(Lista* l, Nodo* n) {
    if(l->tamano == 0){
        l->first = n;
    }else{
        enlazar(l->end, n);
    }
    
    l->end = n;
    l->tamano++;
}

