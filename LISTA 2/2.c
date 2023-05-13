#include <stdio.h>

int main()
{
    int inteiro1, inteiro2, inteiro3, menor;
    
    printf("Digite 3 numeros inteiros\n");
    scanf("%d %d %d", &inteiro1, &inteiro2, &inteiro3);
    
    menor = inteiro1;
    
    if (inteiro2 < menor){
        menor = inteiro2;
    }
    if(inteiro3 < menor){
        menor = inteiro3;
    }
   
    printf("Menor numero: %d", menor);
    
    return 0;
}
