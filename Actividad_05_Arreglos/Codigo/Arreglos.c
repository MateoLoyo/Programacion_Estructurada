#include <stdio.h>

int main()
{
    float temp1, temp2;     // Variables simples tipo float
    float temp[24];         // Arreglo de 24 floats
    int dummy;              // Variable entera auxiliar

    // & obtiene la dirección de memoria de cada variable
    printf("la direccion de &temp1: %d\n", &temp1);
    printf("la direccion de &temp2: %d\n", &temp2);

    // temp sin & es equivalente a &temp[0] (dirección del primer elemento)
    printf("la direccion de temp[24]: %d\n", temp);

    // &temp[23] es la dirección del último elemento válil (índices 0-23)
    printf("la direccion de &temp[23]: %d\n", &temp[23]);

    printf("la direccion de &dummy: %d\n", &dummy);

    return 0;
}
