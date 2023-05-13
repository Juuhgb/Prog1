#include <stdio.h>
#include <math.h>

int main () {
 
int a, b, c;
float resultadoA, resultadoB, resultadoC, resultadoD;

printf("DIGITE O VALOR DE A\n");
  scanf("%d", &a);
printf("DIGITE O VALOR DE B\n");
  scanf("%d", &b);
printf("DIGITE O VALOR DE C\n");
  scanf("%d", &c);

resultadoA = (a * b)/c;
resultadoB = a * a + b + (5 * c);
resultadoC = a * b * c + b + c/3 * 5 - 1;
resultadoD = pow(a, 3) * pow(a, 3) * pow(a, 3)/2;

printf("%.2f, %.2f, %.2f",resultadoA, resultadoB, resultadoC, resultadoD);

return 0;
}