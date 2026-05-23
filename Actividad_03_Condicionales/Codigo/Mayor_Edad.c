#include <stdio.h>

int main()
{
    int Edad;

    // Pide la edad al usuario
    printf("Ingresa tu edad: ");
    scanf("%d", &Edad);

    // Verifica si la edad es 18 o más
    if (Edad >= 18)
    {
        printf("\nEres mayor de edad\n");
    }
    else
    {
        printf("\nEres menor de edad\n");  // Si es menor de 18
    }

    return 0;
}
