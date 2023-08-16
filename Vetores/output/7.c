#include <stdio.h>

int maiorValor(int n, int vet[]){
    int maior = 0;
    for(int i = 0; i < n;i++){
        if(vet[i] > maior){
            maior = vet[i];
        }
    }
    return maior;
}

int main(){
    int n, vet[n], resultado;

    scanf("%d", &n);

    for(int i = 0; i < n;i++){
        scanf("%d", &vet[i]);
    }
    resultado = maiorValor(n, vet);
    printf("Maior numero: %d", resultado);
    return 0;
}