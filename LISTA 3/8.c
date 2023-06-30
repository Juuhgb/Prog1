#include <stdio.h>

int main(){
    int j, resultado;

    printf("Tabuada do 1 ate o 10:\n");

    for (int i = 1; i <=10; i++){
        printf("Tabuada do %d\n", i);
        
        for (j = 1; j <=10; j++){
          resultado = i * j;
          printf("%d x %d = %d\n", i, j, resultado);
        }
        printf("\n");
    }
    return 0;
}