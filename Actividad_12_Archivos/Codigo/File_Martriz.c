#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    // Declaración de variables
    char Tablero[5][5];     // Matriz 5x5 para el tablero
    char Nombre[50];        // Guarda el nombre del usuario
    char Frase[50];         // Lee primera línea del archivo
    char Frase2[50];        // Lee segunda línea del archivo
    FILE *Archivo;          // Puntero para manejar el archivo

    // Llena el tablero con el carácter '~' (agua)
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            Tablero[i][j] = '~';
        }
    }

    // Coloca elementos en posiciones específicas del tablero
    Tablero[1][2] = 'B';    // Barco
    Tablero[3][4] = 'X';    // Impacto
    Tablero[2][1] = '0';    // Otro elemento

    // Muestra el tablero en pantalla
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("%c ", Tablero[i][j]);
        }
        printf("\n");       // Salto de línea al terminar cada fila
    }

    // Lee el nombre del usuario (incluye espacios)
    printf("Ingresa tu nombre: ");
    fgets(Nombre, sizeof(Nombre), stdin);
    // Elimina el salto de línea que fgets guarda al final
    Nombre[strcspn(Nombre, "\n")] = '\0';

    // Abre archivo en modo escritura
    Archivo = fopen("TableroB.txt", "w");
    fprintf(Archivo, "%s\n", Nombre);           // Guarda nombre del usuario
    fprintf(Archivo, "Mateo Loyo Martinez\n");  // Guarda nombre fijo

    // Guarda el tablero en el archivo
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            fprintf(Archivo, "%c ", Tablero[i][j]);
        }
        fprintf(Archivo, "\n");
    }

    fprintf(Archivo, "Mateo Loyo Martinez\n");
    fprintf(Archivo, "%s\n", Nombre);
    fclose(Archivo);        // Cierra el archivo

    // Abre el archivo en modo lectura
    Archivo = fopen("TableroB.txt", "r");

    // Lee las dos primeras líneas del archivo
    fgets(Frase, sizeof(Frase), Archivo);
    Frase[strcspn(Frase, "\n")] = '\0';

    fgets(Frase2, sizeof(Frase2), Archivo);
    Frase2[strcspn(Frase2, "\n")] = '\0';

    // Muestra los nombres leídos del archivo
    printf("\nNombre ingresado:  %s\n", Frase);
    printf("Nombre del codigo: %s\n", Frase2);

    fclose(Archivo);        // Cierra el archivo
    return 0;
}
