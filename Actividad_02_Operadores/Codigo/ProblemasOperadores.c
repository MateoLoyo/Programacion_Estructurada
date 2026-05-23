#include <stdio.h>
int main()
{
/*aqui el a suma primero para c sin cambiar su valor porque lleva postfijo y hace luego le suma 1 al imprimir,
y para b como lleva prefijo le resta al hacer la operacion con c*/

 printf("\n\n");
  int a=3;
  int b=4;
  int c=a++ + --b;
  printf(" %d %d %d", a, b, c);

  printf("\n\n");

  /*aqui en el de parentesis se hace primero la suma y despues la multiplicacion*/

int x=10;
int y=3;
printf(" %d\n", x+y*2);
printf(" %d\n", (x+y)*2);

printf("\n\n");

/*en el primer print como usa un postfijo se guarda la suma para despues y el el segunto se le suma
el postfijo de antes y al lleva el sufijo tambien se le sumara ese valor a la variable i*/

int i=5;
printf(" %d\n", i++);
printf(" %d\n", ++i);

printf("\n\n");

/*aqui como estas haciendo las divisiones con int por eso da 2*/

int A=5, B=2;
float r=A/B;
printf(" %.2f\n", r);



return 0;
}