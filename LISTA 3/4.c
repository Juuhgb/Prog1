#include <stdio.h>

int main (){
    float s;
    int den, n;

    n = 1;
    den = 1;
    while(den <= 50){
        s = s + (float)n/den;
        n = n + 2;
        den++;
    }
    printf("Resultado= %f\n", s);
}