#include <stdio.h>
#define VET 21
int main(){
    int vet[VET], i;

    for(i = 0; i <VET;i++){
        printf("Numero %d: ", i);
        scanf("%d", &vet[i]);
    }

    for(i = 0; i <VET-2;i++){
        if(vet[VET-1] == vet[i]){
            printf("na posicao: %d\n", i);
        }
    }
    return 0;
}