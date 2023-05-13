#include <stdio.h>

int main(){

    float altura, peso, imc;

    printf("Digite sua altura: ");
      scanf("%f", &altura);
    printf("Digite seu peso: ");
      scanf("%f", &peso);

      imc = peso / (altura * altura);

      printf("SEU IMC: %.2f ", imc);
    
}