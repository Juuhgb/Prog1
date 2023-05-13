#include <stdio.h>

int main()
{
    float x, y;
    printf("Insira os pontos de x e y: ");
    scanf("%f %f", &x, &y);
    
    if (x > 0 && y > 0) {
        printf("O ponto %2.fx e o %.2fy esta no Primeiro quadrante", x, y);
    }
    else if (x > 0 && y < 0){
        printf("O ponto %2.fx e o %.2fy esta no Quarto quadrante", x, y);
    }
    else if (x < 0 && y < 0){
        printf("O ponto %2.fx e o %.2fy esta no Terceiro quadrante", x, y);
    }
    else if(x == 0 && y == 0){
        printf("O ponto %2.fx e o %.2fy esta na origem", x, y);
    }
    else if(x == 0){
        printf("O ponto %2.fx e o %.2fy esta no eixo y.\n", x, y);
    }
    else if(y == 0){
        printf("O ponto %2.fx e o %.2fy esta no eixo x.\n", x, y);
    }
    else{
       printf("O ponto %2.fx e o %.2fy esta no segundo quadrante.\n", x, y); 
    }
    
    return 0;
}

