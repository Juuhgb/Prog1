#include <stdio.h>

#include <stdio.h>

int main(){
    int n, nmaior = 0, nmenor = 999991;

    for(int i = 0; i <= 15; i++){
        scanf("%d", &n);
        
        if (n > nmaior){
            nmaior = n;
        }
        if (n < nmenor){
            nmenor = n;
        }
    }
    printf("menor: %d\n", nmenor);
    printf("maior: %d", nmaior);
    return 0;
}