#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *v;                     // Puntero a entero
    v = (int*)malloc(5 * sizeof(int));  // Reserva memoria para 5 enteros
    v = (int*)realloc(v, 10 * sizeof(int));  // Cambia a 10 enteros
    free(v);                    // Libera memoria
    return 0;
}
