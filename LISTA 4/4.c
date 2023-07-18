#include <stdio.h>

int potencia (int a, int b){
    int resultado = 1;
    
    for(int i = 0; i < b;i++) {
        resultado = resultado * a;
    }
    return resultado;
    
}

int main (){
    int n, x, resultado;

    printf("Digite dois numeros\n");
    scanf("%d%d", &x, &n);

    resultado = potencia(x, n);
    printf("Potenciação de %d com %d eh: %d", x, n, resultado);
}