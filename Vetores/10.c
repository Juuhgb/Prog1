#include <stdio.h>

int main(){
    int vet[20];

    for(int i = 0; i < 20;i++){
        scanf("%d", &vet[i]);
    }

    for(int i = 10; i < 20;i++){
        printf("%d ", vet[i]);
    }

    for(int i = 0; i < 10;i++){
        printf("%d ", vet[i]);
    }

}