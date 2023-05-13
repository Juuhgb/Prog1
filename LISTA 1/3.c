
#include <stdio.h>

int main ()
{
   float precoReal, precoEuro, precoDollar, taxaEuro, taxaDollar;
   
   printf("ESCREVE O PRECO EM REAL: ");
   scanf("%f", &precoReal);
   printf("ESCREVA A TAXA EM DOLLAR: ");
   scanf("%f", &taxaDollar);
   printf("ESCREVA A TAXA EM EURO: ");
   scanf("%f", &taxaEuro);

   precoEuro = precoReal * taxaEuro;
   precoDollar = precoReal * taxaDollar;

   printf("TAXA EM EURO: %.2f\n", precoEuro);
   printf("TAXA EM DOLLAR: %.2f\n", precoDollar);

 return 0;

}









