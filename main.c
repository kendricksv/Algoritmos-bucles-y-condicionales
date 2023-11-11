#include <stdio.h>
#include <stdlib.h>

int main()
{
    //**Se declaran las dos variables**//
     int number1, number2;
    printf("Introduce el primer numero: ");
    //**Escanemos la primera varible**//
    scanf("%d", &number1);
    printf("Introduce el segundo numero: ");
    //**Escaneamos la segunda variable**//
    scanf("%d", &number2);
    //**Usar if y else if para evaluar las variables**//
    if (number1 > number2) {
        printf("El numero %d es mayor que el numero %d\n", number1, number2);
    } else if (number1 < number2) {
        printf("El numero %d es mayor que el numero %d\n", number2, number1);
    } else
    {
        printf("Los numeros son iguales\n");
    }
    return 0;
}
