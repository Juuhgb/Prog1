#include <stdio.h>

int main(){
    int requisito1, requisito2, requisito3, requisito4, requisito5;

printf("Voce tem o Requisito: Inferface grafica? (Digite [1] para sim e [0] para nao)\n");
scanf("%i", &requisito1);
printf("Voce tem o Requisito: Inteligencia artifical? (Digite [1] para sim e [0] para nao)\n");
scanf("%i", &requisito2);
printf("Voce tem o Requisito: Encapsulamento? (Digite [1] para sim e [0] para nao)\n");
scanf("%i", &requisito3);
printf("Voce tem o Requisito: Indentacao? (Digite [1] para sim e [0] para nao)\n");
scanf("%i", &requisito4);
printf("Voce tem o Requisito: Structs? (Digite [1] para sim e [0] para nao)\n");
scanf("%i", &requisito5);

if ((requisito1 == 1 || requisito2 == 1) && (requisito3 == 1 && requisito4 == 1) && requisito5 == 1){
    printf("Sera avaliado");
}
else {
    printf("Tirou nota 0");
}
    return 0;
}