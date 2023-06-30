#include <stdio.h>

int main(){

    int mult3, i;
    i = 1;
    
    printf("Esses sao os 50 numeros multiplos de 3: ");

    while(i <= 50){
        mult3 = i * 3;
        i++;
        printf("%d\n", mult3);
    }
    return 0;
}