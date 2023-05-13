#include <stdio.h>

int main () {
    float area, base, altura;

    printf("Digite a base do triangulo\n");
    scanf("%f", &base);
    printf("Digite a altura do triangulo\n");
    scanf("%f", &altura);

    area = (base * altura)/2;

    printf("AREA DO TRIANGULO: ");
    printf("%.2f", area);
}