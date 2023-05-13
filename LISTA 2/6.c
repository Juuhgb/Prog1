#include <stdio.h>

int main()
{
   float preco, valor, desconto; 
   int codigo, quantidade;

    printf("Digite o codigo do produto (1,2,3,4)");
    scanf("%d", &codigo);
     printf("Digite a quantidade do produto: ");
    scanf("%d", &quantidade);

    switch(codigo){
        case 1 : preco = 5.30;break;
        case 2 : preco = 6.00;break;
        case 3 : preco = 3.20;break;
        case 4 : preco = 2.50;break;
    }
    
    valor =  preco * quantidade;
    
    if (quantidade >= 15 || valor >= 40){
        desconto = valor * 0.15;
        valor = valor - desconto;
        printf("Valor com desconto: %.2f", valor);
    }
    else{
    printf("Valor sem desconto: %.2f", valor);
    }
        
    return 0;
}