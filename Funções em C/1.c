#include <stdio.h>

float area (float a, float b){
      return a * b;
}

int main (){
    int n;
    float comprimento, largura, resultado;
    printf("Digite a quantidade de terrenos: ");
    scanf("%d", &n);

    for (int i = 1; i <= n;i++){
        printf("Digite o comprimento e a largura do %d terreno: ", i);
        scanf("%f", &comprimento);
        scanf("%f", &largura);
        resultado = area(comprimento, largura);
        printf("A area do terreno %d eh %.2f\n", i, resultado);
    }
   return 0;
}