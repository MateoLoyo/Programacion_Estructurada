#include <stdio.h>

int main()
{
    int x;          // Cantidad de números a ingresar
    int suma = 0;   // Acumulador de la suma, inicia en 0
    int num;        // Guarda cada número ingresado

    // Pide la cantidad de números
    printf("Cuantos numeros vas a ingresar: ");
    scanf("%d", &x);

    // Ciclo for: se ejecuta x veces
    // i va de 1 hasta x, aumentando de 1 en 1
    for (int i = 1; i <= x; i++)
    {
        // Pide el número i-ésimo
        printf("Escribe el numero %d: ", i);
        scanf("%d", &num);

        suma += num;  // Acumula el número en suma (suma = suma + num)
    }

    printf("La suma es: %d\n", suma);

    return 0;
}
