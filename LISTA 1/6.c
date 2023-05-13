#include <stdio.h>
int main () {

int a, b, aux;

aux = a;
a = b;
b = aux;

scanf("%d", &a);
scanf("%d", &b);

printf("Valor de A e B: %d, %d\n", a, b);

printf("Valor de B %d \n", b);
printf("Valor de A %d", a);

 return 0;
}