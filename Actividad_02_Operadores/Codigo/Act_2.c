#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Declaración e inicialización de variables
    int A = 2, B = 5, C = 21, D, E, F;

    // Evalúa la expresión ternaria: 30 < (C | (A += B)) ? 1 : 0
    // Primero A += B hace A = 7, luego C | A = 21 | 7 = 23, 30 < 23 es falso, D = 0
    D = 30 < (C | (A += B)) ? 1 : 0;

    // E = C | (A += B), A ya vale 7 de antes, 21 | 7 = 23
    E = C | (A += B);

    // F = E || D, 23 || 0 = 1 (verdadero)
    F = (E || D);

    printf("El valor de F es: %d\n", F);
    printf("El valor de E es: %d\n", E);
    printf("El valor de E despues de un aumento es: %d\n", ++E);  // ++E incrementa antes de imprimir
    printf("El valor de E despues de un decremento es: %d\n", --E);  // --E decrementa antes de imprimir
    printf("El valor de D es: %d", D++);  // D++ imprime primero, luego incrementa
    printf("\nPorque no me gusta el cero el valor de D se le sumara uno\nEl valor de D es: %d", D);

    return 0;
}