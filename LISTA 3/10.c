#include <stdio.h>

int main (){
   int num, soma, cont;
   float media;

   media = 0;
   soma = 0;
   for(int i = 0; i < 50; i++){
    printf("Digite um numero inteiro: ");
    scanf("%d", &num);

     if(num > 10 && num < 50){
        if (num % 7 == 0) {
            soma = soma + num;
            cont++;
        }
     }
     if(num == 0){
            break;
        }
   }
   media = (float)soma / cont;
   printf("Numeros entre 10 e 50 e multiplos de 7:\n");
   printf("Quantidade: %d\n", cont);
   printf("Media: %.2f", media);

}