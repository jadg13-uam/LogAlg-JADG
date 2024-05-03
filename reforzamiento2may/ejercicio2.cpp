/*Leer la edad de n cantidad personas 
y decir cual es el promedio de edade, 
cuantos son mayores de edad y cuantos son menores de edad*/

#include <iostream>
using namespace std;

#define MAX 1000
#define MAYOR_EDAD 18

int main(int argc, char const *argv[])
{
    int edades[MAX], cant, suma =0, cantMayor=0, cantMenor=0;
    float promedio;

    cout << "Cuantas edades desea ingresar: ";
    cin >> cant;
    if(cant <= MAX){
        for (int i = 0; i < cant; i++){
            cout << "Edad # " << i+1 << ": ";
            cin >> edades[i];
        }

        for (int cont = 0; cont < cant; cont++){
            suma += edades[cont];
            if(edades[cont]>=MAYOR_EDAD){
                cantMayor++;
            }else if(edades[cont]<MAYOR_EDAD){
                cantMenor++;
            }
        }

        promedio = suma/cant;
        cout << "El promedio de edades es: " << promedio << endl;
        cout << "Cantidad de personas mayores de edad: " << cantMayor << endl;
        cout << "Cantidad de personas menores de edad: " << cantMenor << endl;
        cout << "Total de personas: " << cant << endl;

        int op;
        cout << "Desea ingresar otra cantidad de edades? (1: Si, 2: No): ";
        cin >> op;
        if(op == 1){
            main(0, 0);
        }else{
            cout << "Gracias por usar el programa" << endl;
        }
    }else{
        cout << "La cantidad de edades ingresadas supera el limite de " << MAX << endl;
        main(0, 0);
    }

    return 0;
}
