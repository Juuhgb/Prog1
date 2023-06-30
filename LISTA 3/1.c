#include <stdio.h>

int main(){
   int inicio, fim, maior, impar;

   printf("Digite o numero que vai iniciar ") ;
   scanf("%d", &inicio);
   printf("Digite o numero que vai finalizar ") ;
   scanf("%d", &fim);

   if (inicio > fim){
      maior = inicio;
      inicio = fim;
      fim = maior;
   }

   impar = 0;
   inicio = inicio + 1;
   fim = fim - 1;
   while(inicio <= fim){
      if(inicio % 2 != 0){
        impar++;
      }
      inicio++;
   }
   printf("Quantidade de numeros impares: %d", impar);

   return 0;
}
