/*Imprimir los numeros del 99 al 70*/
#include <iostream>

using namespace std;

void imprimirNum();

main(){
    imprimirNum();
}

void imprimirNum(){
    for(int i = 99; i>= 70; i--){
        cout << i << endl;
    }
}