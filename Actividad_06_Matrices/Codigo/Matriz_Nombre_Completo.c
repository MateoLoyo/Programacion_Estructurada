#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Arreglo de 4 cadenas de 20 caracteres cada una
    char Nombre[4][20];
    // Arreglo de caracteres con terminador nulo '\0'
    char ArregloChar[6] = {'M', 'A', 'T', 'E', 'O', '\0'};
    int Numeros[5];         // Arreglo de 5 enteros
    int i;

    printf("\n==========================\n");
    printf("Ingresa tu nombre completo:");
    printf("\n==========================\n");

    // Lee 2 nombres
    for (i = 0; i < 2; i++)
    {
        printf("Ingresa tu %d Nombre: ", i + 1);
        scanf("%s", Nombre[i]);     // %s lee hasta encontrar espacio
    }

    // Lee 2 apellidos (se guardan en Nombre[2] y Nombre[3])
    for (i = 0; i < 2; i++)
    {
        printf("Ingresa tu %d Apellido: ", i + 1);
        scanf("%s", Nombre[i + 2]);
    }

    printf("\n================================================\n");
    // Muestra el nombre completo concatenado
    printf("El Nombre ingresado fue: %s %s %s %s\n", Nombre[0],
           Nombre[1], Nombre[2], Nombre[3]);

    // Muestra direcciones de memoria de cada parte del nombre
    printf("\nLa direccione de memoria de %s fue: %p\n", Nombre[0], Nombre[0]);
    printf("\nLa direccione de memoria de %s fue: %p\n", Nombre[1], Nombre[1]);
    printf("\nLa direccione de memoria de %s fue: %p\n", Nombre[2], Nombre[2]);
    printf("\nLa direccione de memoria de %s fue: %p\n", Nombre[3], Nombre[3]);
    printf("\n\nDireccion de memoria Nombre completo: %p\n", Nombre);

    printf("\n================================================\n");
    printf("Direccion de memoria de las partes de un\narreglo de caracteres :\n");
    printf("================================================\n");

    // Muestra cada carácter y su dirección (diferen en 1 byte)
    printf("%c: %p\n", ArregloChar[0], &ArregloChar[0]);
    printf("%c: %p\n", ArregloChar[1], &ArregloChar[1]);
    printf("%c: %p\n", ArregloChar[2], &ArregloChar[2]);
    printf("%c: %p\n", ArregloChar[3], &ArregloChar[3]);
    printf("%c: %p\n", ArregloChar[4], &ArregloChar[4]);
    // Nombre del arreglo es la dirección del primer elemento
    printf("Direccion de %s es: %p\n", ArregloChar, ArregloChar);

    printf("\n================================================\n");

    // Lee 5 números enteros
    for (i = 0; i < 5; i++)
    {
        printf("Ingresa el %d numero: ", i + 1);
        scanf(" %d", &Numeros[i]);
    }

    // Muestra direcciones de memoria de cada entero (diferen en 4 bytes)
    printf("\nLa direccione de memoria de %d fue: %p\n", Numeros[0], &Numeros[0]);
    printf("\nLa direccione de memoria de %d fue: %p\n", Numeros[1], &Numeros[1]);
    printf("\nLa direccione de memoria de %d fue: %p\n", Numeros[2], &Numeros[2]);
    printf("\nLa direccione de memoria de %d fue: %p\n", Numeros[3], &Numeros[3]);
    printf("\nLa direccione de memoria de %d fue: %p\n", Numeros[4], &Numeros[4]);

    printf("\n================================================\n");
    return 0;
}
