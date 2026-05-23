#include <stdio.h>

int main()
{
    int v[3] = {10, 20, 30};  // Arreglo de 3 enteros en memoria contigua

    // v es la dirección base (&v[0]). *v = primer elemento
    printf("v[0] = %d, *v = %d\n", v[0], *v);

    // v+1 avanza sizeof(int) bytes. *(v+1) = v[1]
    printf("v[1] = %d, *(v+1) = %d\n", v[1], *(v+1));

    // v+2 avanza 2 posiciones. *(v+2) = v[2]
    printf("v[2] = %d, *(v+2) = %d\n", v[2], *(v+2));

    return 0;
}