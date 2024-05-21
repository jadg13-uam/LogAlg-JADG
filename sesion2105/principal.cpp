#include <iostream>
#include "variables.h"

using namespace std;

int main(int argc, char const *argv[])
{
    /* code */
    PERSON teacher;
    PERSON students[MAXREGISTERS];
    int op, i=0;
    cout << "CIF:";
    cin >> teacher.cif;
    cout << "Nombres: ";
    scanf(" %[^\n]", teacher.name);
    cout << "Apellidos: ";
    scanf(" %[^\n]", teacher.lastName);

    do{
        system("cls||clear");
        printf("CIF: ");
        scanf(" %[^\n]", students[i].cif);
        printf("Nombres: ");
        scanf(" %[^\n]", students[i].name);
        printf("Apellidos: ");
        scanf(" %[^\n]", students[i].lastName);
        printf("Nota: ");
        scanf("%d", &students[i].grade);

        printf("Desea ingresar otro registro \n 1. Si \n 0. No \n Digite su Opcion: ");
        cin >> op;
        i++;
    }while(op!=0);

    printf("Datos del Profesor\n  CIF: %s\n", teacher.cif);
    printf("Nombre completo: %s %s\n", teacher.name, teacher.lastName);
    cout << "Listado de estudiante\n";
    for(int j = 0; j <i ; j++){
        printf("Nombre: %s \nApellidos: %s \nNota: %d\n", 
        students[j].name, students[j].lastName, students[j].grade);
    }
    return 0;
}
