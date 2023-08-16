#include <stdio.h>

int main(){

    int vet[10];
    int cont = 0;

    for(int i = 0; i < 10;i++){
        scanf("%d", &vet[i]);
        if(vet[i] == -1){
            break;
        }
        if(10 < vet[i] && vet[i] < 50){
            cont++;
        }
    }
    printf("Quantidade de numeros no intervalo entre 10 e 50: %d", cont);
}