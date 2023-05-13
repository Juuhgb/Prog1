#include <stdio.h>

int main(){
 float gasto, valorApagar;
 
 printf("Digite o valor gasto: ");
 scanf("%f", &gasto);

 valorApagar = gasto * 1.10;

printf("VALOR TOTAL A SER PAGO:R$%.2f ", valorApagar);

return 0;
}