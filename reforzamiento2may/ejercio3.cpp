/*
Multiplicar un escalar a una matriz 4 x 4
*/

#include <iostream>

using namespace std;

#define ROWS 4
#define COLUMNS 4

int matriz[ROWS][COLUMNS];

int k;

main(){
    for (int r = 0; r < ROWS; r++){
        for (int c = 0; c < COLUMNS; c++){
            cout << "Dime el elemento # " << r + 1 << ", " << c + 1 << ": ";
            cin >> matriz[r][c];
        }
    }

    for (int i = 0; i < ROWS; i++){
        for (int j = 0; j < COLUMNS; j++){
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }

    cout << "Dime el escalar (K): ";
    cin >> k;

    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLUMNS; j++)
        {
            matriz[i][j] = k * matriz[i][j];
        }
    }
    cout << "Nueva matriz  \n";
    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLUMNS; j++)
        {
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }
}
