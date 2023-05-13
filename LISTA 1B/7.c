#include <stdio.h>
int main () {
    float quilometros, pagar, pagarComDesconto;
    int dia;

    printf("digite quantos dias ficou com o carro:\n");
    scanf("%d", &dia);
    printf("digite quantos quilometros andou com o carro:\n");
    scanf("%f", &quilometros);

    pagar = (dia * 30) + (quilometros * 0.01);
    pagarComDesconto = pagar * 0.9;

    printf("valor a pagar %.2f \n", pagar);
    printf("Com o desconto o valor ficara: %.2f", pagarComDesconto);
}