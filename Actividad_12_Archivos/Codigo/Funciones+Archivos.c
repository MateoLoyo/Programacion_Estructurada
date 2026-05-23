#include <stdio.h>

// Prototipos de funciones
void capturar(int v[], int n);
void mostrar(int v[], int n);
int filtrar(int origen[], int destino[], int n);

// Llena el arreglo con datos del usuario
void capturar(int v[], int n)
{
    int i;
    for(i = 0; i < n; i++)
    {
        printf("Ingresa el elemento %d: ", i);
        scanf("%d", &v[i]);
    }
}

// Muestra los elementos del arreglo
void mostrar(int v[], int n)
{
    int i;
    for(i = 0; i < n; i++)
    {
        printf("%d ", v[i]);
    }
    printf("\n");
}

// Filtra: impares, no múltiplos de 3, y <= 10
// Retorna el tamaño del arreglo resultante
int filtrar(int origen[], int destino[], int n)
{
    int i;
    int tam = 0;

    for(i = 0; i < n; i++)
    {
        // Condición de filtrado combinada
        if(origen[i] % 2 != 0 && origen[i] % 3 != 0 && origen[i] <= 10)
        {
            destino[tam] = origen[i];
            tam++;
        }
    }

    return tam;
}

int main()
{
    int v[6];
    int resultado[6];
    int n;
    int i;
    FILE *f;

    capturar(v, 6);

    printf("\nArreglo original: \n");
    mostrar(v, 6);

    // n = cantidad de elementos que cumplieron el filtro
    n = filtrar(v, resultado, 6);

    printf("Arreglo filtrado: \n");
    mostrar(resultado, n);

    // Guarda el resultado en archivo de texto
    f = fopen("resultado.txt", "w");

    for(i = 0; i < n; i++)
    {
        fprintf(f, "%d ", resultado[i]);
    }

    fclose(f);

    return 0;
}