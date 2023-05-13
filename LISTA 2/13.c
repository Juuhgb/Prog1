#include <stdio.h>

int main (){
    float saldo, credito;

printf("Digite o seu saldo medio: ");
scanf("%f", &saldo);

if (saldo > 400){
    credito = saldo * 0.30;
    saldo = saldo + credito;
    printf("Seu credito eh de: %2f\n", credito);
    printf("Seu saldo ficara: %.2f", saldo);
}
if (300 < saldo && saldo <= 400){
    credito = saldo * 0.25;
    saldo = saldo + credito;

    printf("Seu credito eh de: %.2f\n", credito);
    printf("Seu saldo ficara: %.2f", saldo);
}
if (200 < saldo && saldo <= 300){
    credito = saldo * 0.20;
    saldo = saldo + credito;
    printf("Seu credito eh de: %.2f\n", credito);
    printf("Seu saldo ficara: %.2f", saldo);
}
if (saldo <= 200){
    credito = saldo * 0.10;
    saldo = saldo + credito;
    printf("Seu credito eh de: %.2f\n", credito);
    printf("Seu saldo ficara: %.2f", saldo);
}
    return 0;
}