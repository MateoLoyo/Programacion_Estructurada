#include <stdio.h>

int main()
#include <stdio.h>

int main()
{
    int num;

    // Pide un número entre 0 y 10
    printf("Por favor ingrese un numero entre 0-10:");
    scanf("%d", &num);

    // Compara si el número es 1, 2, 3, 5 o 7 (primos entre 0 y 10)
    // || es el operador OR (o lógico)
    if (num == 1 || num == 2 || num == 3 || num == 5 || num == 7)
    {
        printf("Es primo");
    }
    else
    {
        printf("No es primo");
    }

    return 0;
}
