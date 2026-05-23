#include <stdio.h>

int main()
{
    int opcion;

    // Ciclo do-while: ejecuta al menos una vez antes de evaluar la condición
    do
    {
        // Muestra el menú de opciones
        printf("1. Continuar\n");
        printf("2. Salir\n");
        printf("Elige una opcion: ");
        scanf("%d", &opcion);

    }
    while (opcion != 2);  // Repite mientras el usuario no elija salir (2)

    printf("Fin.\n");

    return 0;
}
