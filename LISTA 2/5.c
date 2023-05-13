#include <stdio.h>

int main()
{
    float lado1, lado2, lado3;
    
    printf("Digite os lados do trinaqulo: ");
    scanf("%f %f %f", &lado1, &lado2, &lado3);
    
    if (lado1 == lado2 && lado2 == lado3){
        printf("Triangulo Equilatero");
    }
    else if (lado1 == lado2 || lado1 == lado3 || lado2 == lado1 || lado2 == lado3 || lado3 == lado1 || lado3 == lado2){
        printf("Triangulo Isosceles");
    }
    else {
        printf("Triangulo escaleno");
    }
    
    return 0;
}