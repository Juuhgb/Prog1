#include <stdio.h>
int main() {

int precoDoCafe, troco, dinheiro;

printf ("ESCREVA O VALOR PARA COLOCAR NA MAQUINA(APENAS MULTIPLO DE 5): ");
scanf ("%d", &dinheiro);

precoDoCafe = 7;
troco = dinheiro % precoDoCafe;

printf ("SEU TROCO %d \n", troco);

 return 0;
}