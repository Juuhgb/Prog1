#include <stdio.h>

int main(){
    int A, B, C, D, diferenca;

    printf("DIGITE OS VALORES DE A, B, C E D:\n");
    scanf("%d %d %d %d", &A, &B, &C, &D);

   diferenca = (A * B) - (D * C);

   printf("Diferenca entre os valores A e B, C e D %d", diferenca);
}