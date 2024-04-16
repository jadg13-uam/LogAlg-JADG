/*Sumar dos numeros*/
#include <stdio.h>

/*prototipo de función*/
int suma(int num1, int num2);

void test(){
    printf("\n\nesto es una prueba\n");
    printf("\nLa suma de 2 + 3  es %d", suma(2, 3));
    int x= 25, y = 6455;
    printf("\nLa suma de %d + %d  es %d", x, y, suma(x, y));
    
}

int main(int argc, char const *argv[])
{
    /* code */
    int num1, num2;
    printf("Dime el primer valor: ");
    scanf("%d", &num1);
    printf("Dime el segundo valor: ");
    scanf("%d", &num2);
    printf("La suma de %d + %d es\n", num1, num2);
    printf("%d", suma(num1, num2));

    test();
    
    return 0;
}


/*Función*/
int suma(int num1, int num2){
    return num1 + num2;
}