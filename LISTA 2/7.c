#include <stdio.h>

int main()
{
    float reajuste, salario, reajusteSalario, valorFinal;
    int codigo;
    
    printf("Digite seu salario: ");
    scanf("%f", &salario);
    
    printf("Digite seu codigo: ");
    scanf("%d", &codigo);
    
    switch(codigo) {
        case 1 : reajuste = 0.10;break;
        case 2 : reajuste = 0.07;break;
        case 3 : reajuste = 0.12;break;
        case 4 : reajuste = 0.11;break;
    }
    
    reajusteSalario = salario * reajuste;
    valorFinal= salario + reajusteSalario;
    
    printf("Seu reajuste: %.2f \n", reajusteSalario);
    printf("Salario reajustado: %.2f", valorFinal);

    return 0;
}
