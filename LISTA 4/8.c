#include <stdio.h>

void divisivel (int n){
    int cont = 0;
    for(int i = 1; i < n;i++){
        if(n % i == 0){
            printf("%d\n", i);
            cont++;
        }
    }
    printf("Quantidade: %d", cont);
}


int main(){

    int n;
   scanf("%d", &n);

   divisivel(n);
}