/*Sumar los elementos de un arreglo*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int numbers[2];

    numbers[0] = 3;
    numbers[2] = 5;
    numbers[4] = 4;
    numbers[3] = 6;
    numbers[1] = 1;

 
    printf("Elemento # 1: %d\n", numbers[0]);
    printf("Elemento # 2: %d\n", numbers[1]);
    printf("Elemento # 3: %d\n", numbers[2]);
    printf("Elemento # 4: %d\n", numbers[3]);
    printf("Elemento # 5: %d\n", numbers[4]);

    printf("Suma\n");

    int sum = numbers[0] + numbers[1] + numbers[2] + numbers[3] + numbers[4];

    printf("La suma es %d\n", sum);

    return 0;
}
