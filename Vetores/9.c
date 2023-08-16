#include <stdio.h>

int main(){
    int n;

    scanf("%d", &n);
    
    int vet[n], aux;

    for(int i = 0; i < n;i++){
        scanf("%d", &vet[i]);
    }

    for(int i = 0; i < n;i++){
        for(int j = i+1;j < n;j++){
            if(vet[i] > vet[j]){
                aux = vet[i];
                vet[i] = vet[j];
                vet[j] = aux;
            }
        }
    }
    printf("Vetor em ordem crescente:\n");
    for(int i = 0; i < n;i++){
       printf("%d ", vet[i]);
    }
  return 0;
}
