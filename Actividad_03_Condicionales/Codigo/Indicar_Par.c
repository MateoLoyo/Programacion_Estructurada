#include <stdio.h>

int main()
{
    int Numero;

    // Pide al usuario un número entero
    printf("Ingresa tu numero entero: ");
    scanf("%d", &Numero);

    // Si el residuo de dividir entre 2 es 0, el número es par
    if (Numero % 2 == 0)
    {
        printf("tu Numero es par");
    }
    else
    {
        printf("tu Numero es impar");  // Si no es par, es impar
    }

    return 0;
}
