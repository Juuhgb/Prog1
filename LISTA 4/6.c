#include <stdio.h>

float IMC (float peso, float altura){
    return peso/(altura * altura);
}
 void tabela (float quilo){
     if (quilo < 18.5){
        printf("Abaixo do peso");
     }
     if(18.5 <= quilo && quilo <= 24.9){
        printf("Peso normal");
     }
     if(25 <= quilo && quilo <= 29.9){
        printf("Sobrepeso");
     }
     if(quilo >= 30){
        printf("Obeso");
     }
}

int main(){ 
    float peso, altura;

    printf("Digite seu peso: ");
    scanf("%f", &peso);
    printf("Digite sua altura: ");
    scanf("%f", &altura);

    printf("Seu IMC eh de: %.2f\n", IMC(peso, altura));
    tabela(IMC(peso, altura));

  return 0;
}
