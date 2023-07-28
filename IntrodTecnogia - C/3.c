#include <stdio.h>

int main(){
    int n, i = 1, cont = 0;

    printf("Digite um numero: ");
    scanf("%d", &n);

    while(i <= n){
        if (n % i == 0){
            cont++;
        }
        i++;
    }
    if(cont == 2){
        printf("Numero primo");
    }
    else {
        printf("Nao eh primo");
    }
}