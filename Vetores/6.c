#include <stdio.h>

void maiorValor(int vet[], int n){
    int maior = 0;
    for(int i = 0; i < n;i++){
        if(vet[i] > maior){
            maior = vet[i];
        }
    }
    printf("%d", maior);
}

int main(){
    int n;
    scanf("%d", &n);
    
    int vet[n];

    for(int i = 0; i < n;i++){
        scanf("%d", &vet[i]);
    }
    
    printf("Maior numero: ");
    maiorValor(vet, n);
    return 0;
}