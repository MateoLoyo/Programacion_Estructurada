#include <stdio.h>
#include <stdlib.h>

// struct define una plantilla de datos
struct Alumno
{
    char Nombre[20];
    float Cal;
    int Act;
    int Derecho;
};

int main()
{
    struct Alumno Grupo1[3];  // Arreglo de struct (3 elementos)
    int i;

    // Captura de datos con ciclo for
    for(i = 0; i < 3; i++)
    {
        printf("--- Alumno %d ---\n", i + 1);
        printf("Nombre: ");
        fgets(Grupo1[i].Nombre, 20, stdin);

        printf("Calificacion: ");
        scanf("%f", &Grupo1[i].Cal);

        printf("Actividades Realizadas: ");
        scanf("%d", &Grupo1[i].Act);

        printf("Con/Sin Derecho: ");
        scanf("%d", &Grupo1[i].Derecho);

        getchar();             // Limpia buffer de entrada
    }

    // Muestra datos con ciclo for
    printf("=== Lista de Alumnos ===\n");
    for(i = 0; i < 3; i++)
    {
        printf("Alumno %d:\n", i + 1);
        printf("Nombre: %s\n", Grupo1[i].Nombre);
        printf("Calificacion: %.2f\n", Grupo1[i].Cal);
        printf("Actividades Realizadas: %d\n", Grupo1[i].Act);
        printf("Con/Sin Derecho: %d\n", Grupo1[i].Derecho);
    }

    return 0;
}