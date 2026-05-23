#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *v;                     // Puntero a entero
    v = (int*)calloc(5, sizeof(int));  // Reserva e inicializa en cero
    printf("%d\n", v[0]);       // Muestra v[0] = 0
    printf("%d\n", v[1]);       // Muestra v[1] = 0
    printf("%d\n", v[2]);       // Muestra v[2] = 0
    free(v);                    // Libera memoria
    return 0;
}
