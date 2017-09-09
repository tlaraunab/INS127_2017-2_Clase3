typedef struct Nodo {
    int dato;
    struct Nodo *next;
} Nodo;

Nodo* crearNodo(int dato){
    Nodo* pivote = (Nodo* ) malloc(sizeof(Nodo));
    pivote->dato = dato;
    pivote->next = NULL;
    
    return pivote;
}

void enlazar(Nodo* actual, Nodo* siguiente){
    actual->next = siguiente;
}