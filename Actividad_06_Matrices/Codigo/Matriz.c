#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, j;
    int n = 3;              // Filas del tablero
    int m = 3;              // Columnas del tablero
    int jugador1[n][m];     // Tablero del jugador 1
    int jugador2[n][m];     // Tablero del jugador 2
    int b1 = 777;           // Valor para barco del jugador 1
    int b2 [2] = {555, 555};    // Error: no se puede inicializar int con llaves

    // Llena ambos tableros con 0 (agua)
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            jugador1[i][j] = 0;
            jugador2[i][j] = 0;
        }
    }

    // Muestra tablero del jugador 1
    printf("jugador 1:\n");
    for (i = 0; i < n; i++)
    {
        printf("\n");
        for (j = 0; j < m; j++)
        {
            printf("%d ", jugador1[i][j]);
        }
    }
    printf("\n");

    // Muestra tablero del jugador 2
    printf("\njugador 2:\n");
    for (i = 0; i < n; i++)
    {
        printf("\n");
        for (j = 0; j < m; j++)
        {
            printf("%d ", jugador2[i][j]);
        }
    }
    printf("\n");

    // Pide posición del primer barco (código incompleto)
    printf("\nJugador 1 Ingresa el primer barco de 1 casilla: ");


    return 0;
}
