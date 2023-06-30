#include <stdio.h>

int main(){
    int N, numero, soma, quantidade;
    float media;

    printf("Digite a quantidade de numeros: ");
    scanf("%d", &N);

    soma = 0;
    for(int i = 0;i < N; i++){
        printf("Digite um numero: ");
        scanf("%d", &numero);
        soma = soma + numero;
        quantidade++;
    }
    media = soma/quantidade;
    
    printf("Media dos numeros: %f", media);
}