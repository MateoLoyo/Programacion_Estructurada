#include <stdio.h>

int main()
{
    int x;          // Guarda cada número ingresado
    int suma = 0;   // Acumulador de la suma, inicia en 0

    // Pide el primer número
    printf("Escribe un numero (0 para terminar): ");
    scanf("%d", &x);

    // Ciclo while: se repite mientras x sea diferente de 0
    while (x != 0)
    {
        suma += x;  // Suma el número ingresado al acumulador

        // Pide el siguiente número
        printf("Escribe otro numero (0 para terminar): ");
        scanf("%d", &x);
    }

    printf("La suma es: %d\n", suma);

    return 0;
}
