#include <stdio.h>

int main(){
    int idade, menos18, mais30;

    menos18 = 0;
    mais30 = 0;
    for (int i = 0; i < 40;i++){
          printf("Digite uma idade: ");
          scanf("%d", &idade);
          if(idade == 0){
            break;
          }
          if(idade < 18){
            menos18++;
          }
          if (idade > 30){
            mais30++;
          }    
    }
    printf("Quantidade de menores de idade: %d\n", menos18);
    printf("Quantidade de maiores de 30: %d", mais30);
}