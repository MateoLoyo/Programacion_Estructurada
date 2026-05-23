#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *v;                     // Puntero a entero
    int i;
    v = (int*)malloc(5 * sizeof(int));  // Reserva memoria para 5 enteros
    for(i = 0; i < 5; i++)
    {
        v[i] = i * 2;          // Guarda valor en posicion i
    }
    for(i = 0; i < 5; i++)
    {
        printf("%d ", v[i]);   // Muestra cada valor
    }
    free(v);                    // Libera la memoria reservada
    return 0;
}
