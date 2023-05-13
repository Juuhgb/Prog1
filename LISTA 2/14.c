#include <stdio.h>
#include <ctype.h>

int main (){
    float consumo, km;
    char letra;

    printf("Digite a quantidade de km: ");
    scanf("%f", &km);
     printf("Digite o tipo do veiculo(A=15km por litro, B=12km por litro e C=10km por litro): ");
    scanf(" %c", &letra);

    letra = tolower(letra);
    
    switch(letra){
        case 'a' : consumo = km / 15;
        printf("Consumo estimado do combustivel: %.2f litros", consumo);
        break;

        case 'b' : consumo = km / 12;
        printf("Consumo estimado do combustivel: %.2f litros", consumo);
        break;

        case 'c' : consumo = km / 10;
        printf("Consumo estimado do combustivel: %.2f litros", consumo);
        break;
        default : printf("Veiculo invalido");
        break;
    }

    return 0;
}