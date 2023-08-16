#include <stdio.h>

int main(){
    int vet[10];
    int menor = 0, maior = 0;

    for(int i = 0; i < 10;i++){
        scanf("%d", &vet[i]);
        if(vet[i] == 0){
            break;
        }
        if(vet[i] < 18){
           menor++;
        }
        if(vet[i] > 30){
            maior++;
        }
    }
    printf("Menores de 18: %d\nMaiores de 30: %d\n", menor, maior);
    return 0;
}
