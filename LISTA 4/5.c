#include <stdio.h>

float calculaMedia (float a, float b, char p){

    if (p == 'a' || p == 'A'){
        return (a + b)/2;
    }
    else if (p == 'p'|| p == 'P'){
        return (a * 2 + b * 3)/5;
    }
    else if (p == 'h'|| p == 'H'){
        return 2/(1/a) + (2/b);
    }
}

int main() {
    int nota1, nota2;
    char media;
    float resultado;
    printf("Digite duas notas e a opcao(a, p ou h)\n");
    scanf("%d %d %c", &nota1, &nota2, &media);

    resultado = calculaMedia(nota1, nota2, media);

    printf("Media: %.2f", resultado);
    
}