#include <stdio.h>

int main()
{
    int i;
    int N;

    // Pide la cantidad de temperaturas a registrar
    printf("Ingresa el numero de temperaturas a registrar: ");
    scanf("%d", &N);

    float temp[N];  // Arreglo de N elementos tipo float

    // Ciclo para leer cada temperatura
    // i va de 0 hasta N-1 (índices del arreglo)
    for (i = 0; i < N; i++)
    {
        printf("ingresa la %d temperatura: ", i + 1);  // i+1 para mostrar 1, 2, 3...
        scanf("%f", &temp[i]);  // Guarda el valor en la posición i del arreglo
    }

    // Ciclo para mostrar cada temperatura registrada
    for (i = 0; i < N; i++)
    {
        printf("la %d temperatura: %.2f\n", i + 1, temp[i]);  // %.2f muestra 2 decimales
    }

    return 0;
}
