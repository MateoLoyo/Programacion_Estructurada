#include <stdio.h>

void cambiar(int *x)  // Recibe dirección de memoria (puntero)
{
    *x = 100;         // Dereferencia: modifica el valor original
}

int main()
{
    int a = 5;

    printf("Antes: a = %d\n", a);   // a = 5
    cambiar(&a);                     // Pasa la dirección de a
    printf("Despues: a = %d\n", a); // a = 100 (modificado en la función)

    return 0;
}
