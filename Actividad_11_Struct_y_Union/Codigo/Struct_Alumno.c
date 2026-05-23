#include <stdio.h>
#include <stdlib.h>

// struct agrupa variables de distinto tipo bajo un solo nombre
struct Alumno
{
    char Nombre[20];   // Campo de tipo char (cadena)
    float Cal;         // Campo de tipo float
    int Act;           // Campo de tipo int
    int Derecho;       // Campo de tipo int
};

int main()
{
    struct Alumno a1;         // Declaracion de variable struct

    printf("Nombre: ");
    fgets(a1.Nombre, 20, stdin);

    printf("Calificacion: ");
    scanf("%f", &a1.Cal);

    printf("Actividades Realizadas: ");
    scanf("%d", &a1.Act);

    printf("Con/Sin Derecho: ");
    scanf("%d", &a1.Derecho);

    // Acceso con operador punto (.)
    printf("\nDatos capturados:");
    printf("\nNombre: %s", a1.Nombre);
    printf("Calificacion: %.2f\n", a1.Cal);
    printf("Actividades Realizadas: %d\n", a1.Act);
    printf("Con/Sin Derecho: %d\n", a1.Derecho);

    return 0;
}