#include <stdio.h>

int main()
{
    float numero1, numero2, numero3, media;
    int acimaDaMedia = 0;
    
    printf("Digite 3 numeros em ponto flutuante:\n");
    scanf("%f %f %f", &numero1, &numero2, &numero3);
    
    media = (numero1 + numero2 + numero3) / 3;
    
    if (numero1 > media) {
        acimaDaMedia++;
    }
    if (numero2 > media) {
        acimaDaMedia++;
    }
    if (numero3 > media) {
       acimaDaMedia++; 
    }
    printf("Media: %.2f\nQuantidade que estao acima da media: %i", media, acimaDaMedia);

    return 0;
}
