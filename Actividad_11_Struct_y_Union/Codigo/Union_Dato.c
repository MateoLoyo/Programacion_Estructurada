#include <stdio.h>
#include <stdlib.h>

// union comparte la misma memoria entre sus miembros
union Dato
{
    int Entero;        // Miembro de tipo int (4 bytes)
    float Decimal;     // Miembro de tipo float (4 bytes)
};

int main()
{
    union Dato x;             // Declaracion de variable union

    // Solo un miembro activo a la vez
    x.Entero = 10;
    printf("Entero: %d\n", x.Entero);

    // El decimal sobrescribe al entero (misma memoria)
    x.Decimal = 11.1;
    printf("Decimal: %.2f", x.Decimal);

    return 0;
}