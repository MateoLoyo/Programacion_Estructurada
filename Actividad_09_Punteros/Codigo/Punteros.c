#include <stdio.h>

int main()
{
    int x = 5;      // Variable entera con valor 5
    int *p;         // Puntero a entero (solo declarado, sin inicializar)

    p = &x;         // p guarda la dirección de memoria de x

    printf("\nx = %d", x);
    printf("\nDireccion de x: %p", (void*)&x);  // &x = dirección de x
    printf("\np = %p", (void*)p);               // p apunta a esa misma dirección
    printf("\n*p = %d", *p);                    // *p accede al valor de x (5)

    *p = 20;        // Modifica x indirectamente a través del puntero
    printf("\nDespues de *p = 20: x = %d\n", x);  // x ahora vale 20

    return 0;
}
