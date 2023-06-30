#include <stdio.h>

int main(){
    int N, cont;

    printf("Digite um numero: ");
    scanf("%d", &N);

    cont = 0;
    for(int i = 1; i<=N; i++){
        if(N % i == 0){
            cont++;
        }
    }
    if (cont == 2){
        printf("Numero primo");
    }
    else {
        printf("Nao eh primo");
    }
}