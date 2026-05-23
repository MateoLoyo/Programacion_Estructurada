#include <stdio.h>  // Incluye la librería para usar printf

int main()
{

    // Declaración de variables de diferentes tipos de datos
    char C = 'M';
    signed char SC = -60;
    unsigned char UC = 180;
    short S = -21000;
    unsigned short US = 48000;
    int I = -123;
    unsigned int UI = 789;
    long L = -456789;
    unsigned long UL = 3456789;
    long long LL = -987654321;
    unsigned long long ULL = 12345678901ULL;  // ULL indica que es unsigned long long
    float F = 6.28f;                          // f indica que es float
    double D = 4.56789;
    long double LD = 1.618033988749895L;      // L indica que es long double

    // Muestra la dirección de memoria y el valor de cada variable
    // &variable obtiene la dirección de memoria
    // %c, %d, %u, %ld, etc. son los formatos de impresión para cada tipo

    printf("char:\n");
    printf("  direccion: %d\n", &C);
    printf("  valor:     %c\n\n", C);  // %c imprime un carácter

    printf("signed char:\n");
    printf("  direccion: %d\n", &SC);
    printf("  valor:     %d\n\n", SC);  // %d imprime entero con signo

    printf("unsigned char:\n");
    printf("  direccion: %d\n", &UC);
    printf("  valor:     %d\n\n", UC);

    printf("short:\n");
    printf("  direccion: %d\n", &S);
    printf("  valor:     %d\n\n", S);

    printf("unsigned short:\n");
    printf("  direccion: %d\n", &US);
    printf("  valor:     %d\n\n", US);

    printf("int:\n");
    printf("  direccion: %d\n", &I);
    printf("  valor:     %d\n\n", I);

    printf("unsigned int:\n");
    printf("  direccion: %d\n", &UI);
    printf("  valor:     %u\n\n", UI);  // %u imprime entero sin signo

    printf("long:\n");
    printf("  direccion: %d\n", &L);
    printf("  valor:     %ld\n\n", L);  // %ld imprime long

    printf("unsigned long:\n");
    printf("  direccion: %d\n", &UL);
    printf("  valor:     %lu\n\n", UL);  // %lu imprime unsigned long

    printf("long long:\n");
    printf("  direccion: %d\n", &LL);
    printf("  valor:     %lld\n\n", LL);  // %lld imprime long long

    printf("unsigned long long:\n");
    printf("  direccion: %d\n", &ULL);
    printf("  valor:     %llu\n\n", ULL);  // %llu imprime unsigned long long

    printf("float:\n");
    printf("  direccion: %d\n", &F);
    printf("  valor:     %f\n\n", F);  // %f imprime número decimal

    printf("double:\n");
    printf("  direccion: %d\n", &D);
    printf("  valor:     %lf\n\n", D);  // %lf imprime double

    printf("long double:\n");
    printf("  direccion: %d\n", &LD);
    printf("  valor:     %.15f\n\n", (double)LD);  // Cast a double para imprimir con %.15f

    return 0;
}