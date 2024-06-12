#include <iostream>
#include <fstream>
#include <cstdlib> // Para std::exit

using namespace std;

struct Ciudad
{
    int id;
    char nombre[30];
    char descripcion[100];
} ciudades[100];

int cargarCiudades(Ciudad ciudades[]);
void escribir(const Ciudad &ciudad);
void guardarCiudades(const Ciudad ciudades[], int numCiudades);
void mostrarCiudades(const Ciudad ciudades[], int numCiudades);
void agregarCiudad(Ciudad ciudades[], int &numCiudades, int &idCounter);

int main(int argc, char const *argv[])
{
    int numCiudades = cargarCiudades(ciudades);
    int idCounter = numCiudades + 1;
    char opcion;

    do
    {
        cout << "Menu:\n";
        cout << "1. Agregar ciudad\n";
        cout << "2. Mostrar ciudades\n";
        cout << "3. Salir\n";
        cout << "Elige una opcion: ";
        cin >> opcion;
        cin.ignore(); // Para limpiar el buffer de entrada

        switch (opcion)
        {
        case '1':
            agregarCiudad(ciudades, numCiudades, idCounter);
            break;
        case '2':
            mostrarCiudades(ciudades, numCiudades);
            break;
        case '3':
            guardarCiudades(ciudades, numCiudades);
            cout << "Saliendo...\n";
            break;
        default:
            cout << "Opcion no valida. Intenta de nuevo.\n";
        }
    } while (opcion != '3');

    return 0;
}

int cargarCiudades(Ciudad ciudades[])
{
    ifstream archivo("ciudades.txt");
    if (archivo.fail())
    {
        return 0;
    }

    int i = 0;
    while (archivo >> ciudades[i].id)
    {
        archivo.ignore(); // Para limpiar el salto de línea después del ID
        archivo.getline(ciudades[i].nombre, 30);
        archivo.getline(ciudades[i].descripcion, 100);
        i++;
    }
    archivo.close();
    return i;
}

void escribir(const Ciudad &ciudad)
{
    ofstream archivo;

    archivo.open("ciudades.txt", ios::app);

    if (archivo.fail())
    {
        cout << "No se pudo abrir el archivo";
        exit(1);
    }
    archivo << ciudad.id << endl;
    archivo << ciudad.nombre << endl;
    archivo << ciudad.descripcion << endl;
    archivo.close();
}

void guardarCiudades(const Ciudad ciudades[], int numCiudades)
{
    ofstream archivo("ciudades.txt");

    if (archivo.fail())
    {
        cout << "No se pudo abrir el archivo";
        exit(1);
    }

    for (int i = 0; i < numCiudades; i++)
    {
        archivo << ciudades[i].id << endl;
        archivo << ciudades[i].nombre << endl;
        archivo << ciudades[i].descripcion << endl;
    }
    archivo.close();
}

void mostrarCiudades(const Ciudad ciudades[], int numCiudades)
{
    for (int i = 0; i < numCiudades; i++)
    {
        cout << "ID: " << ciudades[i].id << endl;
        cout << "Nombre: " << ciudades[i].nombre << endl;
        cout << "Descripcion: " << ciudades[i].descripcion << endl;
        cout << "------------------------" << endl;
    }
}

void agregarCiudad(Ciudad ciudades[], int &numCiudades, int &idCounter)
{
    Ciudad ciudad;
    ciudad.id = idCounter++;
    
    cout << "Dime el nombre de la ciudad: ";
     
    cin.getline(ciudad.nombre, 30);
    cout << "Dime una descripcion de la ciudad: ";
    cin.getline(ciudad.descripcion, 100);
    cout << "presione una tecla para continuar...";
    // Para limpiar el buffer de entrada
    cin.ignore();

    ciudades[numCiudades++] = ciudad;
    escribir(ciudad);

    cout << "Ciudad agregada exitosamente!\n";
}
