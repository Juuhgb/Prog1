#include <stdio.h>

int main(){
   int x, y, maior;
   int n;

   printf("Digite dois numeros: ");
   scanf("%d%d", &x, &y);

   if (x > y){
      maior = x;
      x = y;
      y = maior;
   }

  
   for(n = x + 1; n < y; n++){
    if(n % 5 == 2){
      printf("%d\n", n);
    }
    if (n % 5 == 3){
      printf("%d\n", n);
    }
   }

} 