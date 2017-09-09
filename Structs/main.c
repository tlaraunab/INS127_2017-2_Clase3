#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// typedef -->loquerepresentaeltipo<-- "comosellama"

typedef int boolean;

typedef struct P{
    int edad;
    char nombre[20];
    char* tieneQueDecir;
    int pasos;
    
    struct P *amigo;
} Persona;

void caminar(Persona *p){
    p->pasos++;
}

Persona* crearPersona(char nombre[20]){
    Persona* pivote = (Persona *) malloc(sizeof(Persona));
    strcpy(pivote->nombre, nombre);
    pivote->tieneQueDecir = (char *) malloc(50 * sizeof(char));
    return pivote;
}

void hablar(Persona *p){
    printf("%s", p->tieneQueDecir);
}

int main()
{
    Persona *p1;
    p1 = crearPersona("Nicolas tm");
    
    printf("%s", p1->nombre);
    
    *(p1->tieneQueDecir) = "ola k ase";
    
    hablar(p1);
    caminar(p1);
    
	return 0;
}
