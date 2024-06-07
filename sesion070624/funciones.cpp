#include <iostream>
#include <locale.h>
#include <string.h>
#include "variables.h"

using namespace std;

CIUDAD ciudades[MAX_REG];
int pos=0;

//crud
int obtPos(int id);
void agregar(CIUDAD *c);
void editar(CIUDAD *c, int id);
void eliminar(int id);
CIUDAD buscar(int id);
int menu(int op);
void principal();

void agregar(CIUDAD *c){
    ciudades[pos] = *c;
    pos++;
}

CIUDAD buscar(int id){
    for(int i = 0; i<pos; i++){
        if(id == ciudades[i].id){
            return ciudades[i];
        }
    }
    CIUDAD c;
    return c;
} 

int obtPos(int id){
    for(int i = 0; i < pos; i++){
        if(ciudades[i].id == id){
            return i;
        }
    }
    return -1;
}

void editar(CIUDAD *c, int id){
    int posi = obtPos(id);
    strcpy(ciudades[posi].nombre, c->nombre); 
    strcpy(ciudades[posi].descripcion, c->descripcion);
}

void eliminar(int id){
    int posi = obtPos(id);
    for(int i = posi; i<pos-1; i++){
        ciudades[i] = ciudades[i+1];
    }
    pos--;
}



