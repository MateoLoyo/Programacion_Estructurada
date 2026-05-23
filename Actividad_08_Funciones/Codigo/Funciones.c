#include <stdio.h>
#include <stdlib.h>

// Funcion que pide 2 numeros al usuario y devuelve su suma
// Nota: modifica los parametros por valor (copias locales)
int sum(int a, int b)
{
    printf("\ningresa 1 datos: ");
    scanf("%d", &a);
    printf("ingresa 2 datos: ");
    scanf("%d", &b);
    return a+b ;
}


void cambiar(int x)
{
    x=100;
}

// Recibe un array y su tamano para mostrarlo
void mostrar(int v[], int n)
{
    int i;
    printf("\n\n");
    for(i=0; i<n; i++)
    {
        printf("%d ", v[i]);
    }
            printf("\n");
}

// Recibe matriz 2x3 fija
void mostrarMatriz(int m[2][3])
{
    int i, j;
    printf("\n");
    for(i=0; i<2; i++)
    {
        for(j=0; j<3; j++)
        {
            printf("%d ", m[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    int Datos[5]={1,2,3,4,5};
    int Matriz[2][3]= {{1,2,3},{4,5,6}};
    int a = 5, b = 0, r = 0;

    // a sigue valiendo 5 (paso por valor)
    cambiar(a);
    printf("%d\n", a);

    //Realiza la suma con una copia de valores y devuelve un resultado
    r = sum(a, b);
    printf("%d", r);

    mostrar(Datos, 5);
    mostrarMatriz(Matriz);
    /*int a= 5, b, r;
    cambiar(a);
    printf("%d", a);
    r = sum(a, b);
    printf("%d", r);*/
    return 0;
}
