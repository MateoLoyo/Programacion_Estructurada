#include <stdio.h>

int main()
{
    int Promedio, MateriasR;

    // Pide el promedio del alumno (sobre 100)
    printf("Cual es tu promedio (respecto a 100): ");
    scanf("%d", &Promedio);

    // Pide cuántas materias ha reprobado
    printf("\nCuantas materias has reprobado: ");
    scanf("%d", &MateriasR);

    // && es el operador AND (y lógico)
    // La beca requiere promedio >= 85 y 0 materias reprobadas
    if (Promedio >= 85 && MateriasR == 0)
    {
        printf("\nobtienes la beca\n");
    }
    else
    {
        printf("\nno obtienes la beca\n");
    }

    return 0;
}
