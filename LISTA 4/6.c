#include <stdio.h>

float IMC (float peso, float altura){
    float imc = peso/(altura * altura);
    return imc;
}
const char* tabela (float quilo){
     if (quilo < 18.5){
        return "Abaixo do peso";
     }
     if(18.5 <= quilo && quilo <= 24.9){
        return "com Peso normal";
     }
     if(25 <= quilo && quilo <= 29.9){
        return "com Sobrepeso";
     }
     if(quilo >= 30){
        return "Obeso";
     }
     return "Valor invalido";
}

int main(){
    float imc, peso, altura;
    const char* tabela1;
    printf("Digite seu peso: ");
    scanf("%f", &peso);
    printf("Digite sua altura: ");
    scanf("%f", &altura);
    imc = IMC(peso, altura);
    tabela1 = tabela(imc);

    printf("Seu IMC eh de: %.2f. Voce esta %s.", imc, tabela1);
}