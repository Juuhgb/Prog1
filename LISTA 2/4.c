#include <stdio.h>
#include <math.h>

int main()
{
    float a, b, c, delta, resultado1, resultado2;
    
    printf("Digite os valores de a, b, c:\n");
    scanf("%f %f %f", &a, &b, &c);
    
    delta = pow(b, 2) - 4 * a * c;
    
    if (delta < 0){
        printf("Nao existe valor real");
    }
    else if (a==0){
        printf("Nao eh uma equacao de segundo grau");
    }
    else {
        resultado1 = (- b - sqrt(delta))/2 * a;
        resultado2 = (- b + sqrt(delta))/2 * a;
        printf("Raizes da equacao: %.2f %.2f", resultado1, resultado2);
    }
    return 0;
}