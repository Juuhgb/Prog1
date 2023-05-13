#include <stdio.h>

int main (){
    float altura;
    int idade, brinquedos;

printf("Digite sua altura: \n");
scanf("%f", &altura);
printf("Digite sua idade: \n");
scanf("%f", &idade);

brinquedos = 0;

if(altura >= 1.5 && idade > 12){
    brinquedos++;
}
if(altura >= 1.4 && idade > 14){
    brinquedos++;
}
if(altura >= 1.7 || idade > 16){
    brinquedos++;
}
printf("Voce pode ir em %i brinquedos", brinquedos);

    return 0;
}