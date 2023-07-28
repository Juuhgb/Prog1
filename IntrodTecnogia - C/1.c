#include <stdio.h>

int main (){
    float N, mult = 1;
    
    while (1 > 0){
        printf("Digite um numero: ");
        scanf("%f", &N);
        if(N == 0){
            break;
        }
        mult = mult * N; 
    }
    
    printf("%f", mult);
}