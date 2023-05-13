 #include <stdio.h>
 #define Pi 3.1415

  int main () { 

    double perimetro, area, raio;

    printf("Escreva o raio do circulo: ");
    
    scanf("%lf", &raio);

    area = raio * Pi * raio;
    perimetro = 2 * Pi * raio;

    printf("Perimetro: ");
    printf("%lf", perimetro);
    printf(" Area: ");
    printf("%lf", area);
    return 0;
  }
