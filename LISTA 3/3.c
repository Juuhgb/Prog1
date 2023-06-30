#include <stdio.h>

int main () {
    int n, inicio;
    float s;

printf("Digite um numero ");
scanf("%d", &n);

s = 0;
inicio = 1;
while(inicio <= n){
  s = s + (float)1/inicio;
  inicio++;
}
printf("Quantidade da soma: %f", s);

return 0;
} 