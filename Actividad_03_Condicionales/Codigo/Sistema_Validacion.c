#include <stdio.h>

int main()
{
    int Edad, MateriasR;
    float Promedio;

    // Solicita los datos del estudiante
    printf("Cual es tu edad: ");
    scanf("%d", &Edad);

    printf("Cual es tu Promedio respecto a 100: ");
    scanf("%f", &Promedio);  // %f porque Promedio es float

    printf("Cuantas materias reprobadas tienes: ");
    scanf("%d", &MateriasR);

    // Beca completa: promedio >= 90, sin reprobadas y mayor de edad
    if (Promedio >= 90 && MateriasR == 0 && Edad >= 18)
    {
        printf("\nobtienes la beca\n");
    }
    // 1 o 2 materias reprobadas: sin beca pero puede reinscribirse
    else if (MateriasR > 0 && MateriasR <= 2)
    {
        printf("\nno obtienes la beca\n");
        printf("Puedes reiscribirte\n");
    }
    // 3 o más materias reprobadas: situación crítica
    else if (MateriasR >= 3)
    {
        printf("\nno obtienes la beca\n");
        printf("Estas en situacion critica\n");
    }

    return 0;
}
