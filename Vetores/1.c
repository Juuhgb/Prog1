#include <stdio.h>

int contabiliza(int vet[], int n){
   int cont = 0;
   for(int i = 0; i < n-1;i++){
      if(vet[n-1] == vet[i]){
         cont++;
      }
   }
   return cont;
}

int main(){

   int resultado, n;

    scanf("%d", &n);
    int vet[n];

    for(int i = 0; i < n;i++){
        scanf("%d", &vet[i]);
    }
    resultado = contabiliza(vet, n);
    //printf("O valor %d foi repetido %d vezes",vet, resultado);
    printf("%d", resultado);

    return 0;
}