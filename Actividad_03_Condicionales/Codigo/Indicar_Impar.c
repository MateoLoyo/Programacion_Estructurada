#include <stdio.h>

int main()
{
    int Numero;

    // Pide al usuario un número entero
    printf("Ingresa tu numero entero: ");
    scanf("%d", &Numero);

    // % calcula el residuo de la división entre 2
    // Si el residuo es 1, el número es impar
    if (Numero % 2 == 1)
    {
        printf("tu Numero es impar");
    }
    else
    {
        printf("tu Numero es par");  // Si no es impar, es par
    }

    return 0;
}
