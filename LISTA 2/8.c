#include <stdio.h>

int main()
{
    float x, y, operacao;
    int opcao;
    
    printf("digite os valores de X e Y\n");
    scanf("%f %f", &x, &y);
    
    printf("Escolha uma operacao(1,2,3,4): ");
    scanf("%d", &opcao);
    
    switch(opcao){
        case 1 : operacao = (x + y)/2;
               printf("Valor da operacao: %.2f", operacao);
               break;

        case 2 : operacao = x - y;
               printf("Valor da operacao: %.2f", operacao);
               break;

        case 3 : operacao = x * y;
               printf("Valor da operacao: %.2f", operacao);
               break;

        case 4 : operacao = x / y;
            if (y == 0){
                printf("Erro: divisao por zero\n");
            }
            else {
                printf("Valor da operacao: %.2f", operacao);
            }
             break;

        default: printf("Opcao invalida");
             break;
    }

    return 0;
}