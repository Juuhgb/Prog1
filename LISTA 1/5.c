#include <stdio.h>
#include <math.h>

int main ()
{
   int x1, x2, y1, y2;
   float distancia;


   printf("ESCREVA A COORDENADA DO PONTO A ");
    scanf("%d", &x1);
    scanf("%d", &y1);
   printf("ESCREVA A COORDENADA DO PONTO B ");
    scanf("%d", &x2);
    scanf("%d", &y2);

    distancia = sqrt( pow(x2 - x1, 2) + pow(y2 - y1, 2));

    printf("DISTANCIA ENTRE OS DOIS PONTOS: %.f\n", distancia);
    
   return 0;
}