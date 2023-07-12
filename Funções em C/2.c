#include <stdio.h>

int primo (int a){
    int cont;
    cont = 0;
    for (int i = 1; i <= a;i++){
        if(a % i == 0){
            cont++;
        }
    }
    if(cont == 2){
        return 1;
    }
    else {
        return 2;
    }
}
int main(){
    int n, resultado;
    printf("Digite um numero: ");
    scanf("%d", &n);
    resultado = primo(n);

    if (resultado == 1){
        printf("Eh um numero primo");
    }
    else {
        printf("Nao eh primo");
    }
}