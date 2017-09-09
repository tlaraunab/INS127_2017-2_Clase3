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

int eliminar(Lista* l, int valor){
    Nodo* anterior = NULL;
    Nodo* actual = l->first;
    while(actual != NULL){
        if(actual->dato == valor){
            if(anterior == NULL){
                l->first = actual->next;
                if(actual->next == NULL){
                    l->end = NULL;
                }
            }else {
                enlazar(anterior, actual->next);
                if(anterior->next == NULL){
                    l->end = anterior;
                }
            }
            free(actual);
            return 1;
        }
    anterior = actual;
    }
    return 0;
}