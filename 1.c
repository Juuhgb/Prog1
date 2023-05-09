#include <stdio.h>
#include <ctype.h>

int main()
{
    char vogal, caractere;
    
    printf("ESCREVA UMA LETRA\n");
    scanf("%c", &caractere);
     
    vogal = tolower(caractere);
    
    if (vogal == 'a' || vogal == 'e'|| vogal == 'i' || vogal == 'o' || vogal == 'u'){
    printf("vogal");
    }
    else {
        printf("Nao eh uma vogal");
    }
    return 0;
}