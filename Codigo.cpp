#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
int opcion;
float C,F;
cout << "*****Menu de opciones*******"<< endl;
cout <<"1. Convertir de C a F" << endl;
cout <<"2. Convertir de F a C" << endl;
cout <<" Salir "<<endl;
cout <<"Sleccione una opcion:  "<< endl;
cin >> opcion;
switch (opcion)
{
case 1:
    cout << "Digite su temperatura en Grados celcius";
    cin >> C;
    F=C*1.8+32;
    cout <<"Su temperatura es de " <<F<< "F" <<endl;
    break;

case 2:
    cout <<"Digite su temperatura en grados Farenheit";
    cin >>F;
    C=(F-32)/1.8;
    cout <<"Su temperatura en en grados Celcius es de" <<C<< "C" <<endl;
    break;

default:
    cout <<"Opcion invalida. Por favor intenta de nuevo" <<endl;
    break;
}
return 0;
}   