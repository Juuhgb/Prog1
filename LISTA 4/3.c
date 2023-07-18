#include <stdio.h>
#include <math.h>

float delta (float x, float y, float z){
    return pow(y, 2) - 4 * x * z;
    }

float baskaraNegativo (float x, float y, float delta) {
    return (- y - sqrt(delta))/(2 * x);
    } 

float baskaraPositivo (float x, float y, float delta){
    
    return (- y + sqrt(delta))/(2 * x);
    }  

int main (){

   float a, b, c, d;
   float resultado1, resultado2;

   printf("Digite 3 numeros: ");
   scanf("%f%f%f", &a, &b, &c);

   if (a == 0){
       printf("Nao eh equacao de segundo grau");
      }
   else {
      d = delta(a, b, c);
      if (d < 0) {
        printf("Nao tem valores reais");
      }
      else {
        resultado1 = baskaraNegativo(a, b, d);
        resultado2 = baskaraPositivo(a, b, d);
        printf("Resultado das raizes: %.2f %.2f", resultado1, resultado2);
      }
   }
   return 0;
   }