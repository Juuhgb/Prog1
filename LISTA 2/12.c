#include <stdio.h>

int main () {
 int x, y, z, maior, meio, menor;

 printf("Digite 3 numeros inteiros \n");
 scanf("%i %i %i", &x, &y, &z);

 if (x > y && x > z){
    
    if(y > z){
       maior = x;
       meio = y;
       menor = z;
    }
    else{
       maior = x;
       meio = z;
       menor = y;
    } 
 }
 else if (y > x && y > z){
    
      if(x > z) {
        maior = y;
        meio = x;
        menor = z;
      }
      else {
        maior = y;
        meio = z;
        menor = x;
      }
 }
 else {
      if(x > y) {
        maior = z;
        meio = x;
        menor = y;
      }
      else {
        maior = z;
        meio = y;
        menor = x;
      }
 }
 printf("Ordem decrescente dos numeros inteiros: %i %i %i", maior, meio, menor);

return 0;
}