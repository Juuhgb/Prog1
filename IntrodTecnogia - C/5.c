#include <stdio.h>

int main (){
    int resultado = 5, n;

    printf("Digite um numero: ");
    scanf("%d", &n);

   while(n != 5){
    if(n > 5){
        printf("Voce digitou um numero maior\n");
        scanf("%d", &n);
    }
    if(n < 5){
        printf("Digitou um numero menor\n");
        scanf("%d", &n);
    }

    }

     if(n == 5){
        printf("Voce acertou");
    }

}