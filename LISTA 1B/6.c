#include <stdio.h>

int main(){
    char funcionario;
    float horaTrabalhada, RecebePorHora, salario;

    printf("Digite seu numero de funcionario: \n");
    scanf("%c", &funcionario);
    
    printf("Digite seu numero de horas trabalhadas: \n");
    scanf("%f", &horaTrabalhada);

    printf("Digite quando recebe por hora: \n");
    scanf("%f", &RecebePorHora);

    salario = horaTrabalhada * RecebePorHora;

    printf("Numero do funcionario: %c\n", funcionario);
    printf("Salario: %.2f", salario);
}