#include <stdio.h>

int main()
{
    int op, n, i;
    float cal, sum, prom;
    int apr, rep;
    float pApr, pRep;

    do
    {
        printf("========================================\n");
        printf("        CALCULADORA DE PROMEDIOS\n");
        printf("========================================\n");
        printf("1) Calcular promedio\n");
        printf("2) Salir\n");
        printf("Seleccione una opcion: ");
        scanf("%d", &op);

        if (op == 1)
        {
            //para que inicie en 0 en cada ciclo
            sum = 0.0f;
            apr = 0;
            rep = 0;

            //valida que sea al menos una materia
            do
            {
                printf("\nIngrese el numero de materias (minimo 1): ");
                scanf("%d", &n);

                if (n < 1)
                    printf("Debe ingresar al menos una materia.\n");

            }
            while (n < 1);

            printf("\n--- Calificaciones ---\n");

            for (i = 1; i <= n; i++)
            {
                //valida que este dentro del rango
                do
                {
                    printf("%d) Calificacion (0 - 100): ", i);
                    scanf("%f", &cal);

                    if (cal < 0 || cal > 100)
                        printf("Favor de ingresar una calificacion entre 0 y 100.\n");

                }
                while (cal < 0 || cal > 100);

                /*acumuladores y contadores dentro del for para que
                  se guarde el valor de la suma y de materias apr y rep*/
                sum += cal;

                if (cal < 60)
                    rep++;
                else
                    apr++;
            }

            //calculos fuera para que calcule con la suma final
            prom = sum / n;
            pApr = (apr * 100.0f) / n;
            pRep = (rep * 100.0f) / n;

            printf("\n---     Reporte    ---\n");
            printf("Materias: %d\n", n);
            printf("Suma: %.2f\n", sum);
            printf("Promedio: %.2f\n", prom);
            printf("Aprobadas: %d (%.2f%%)\n", apr, pApr);
            printf("Reprobadas: %d (%.2f%%)\n", rep, pRep);
        }
        else if (op == 2)
        {
            printf("\nVuelve pronto.\n");
        }
        else
        {
            printf("\nIngrese una de las dos opciones validas\n");
        }

    }
    while (op != 2);

    return 0;
}
