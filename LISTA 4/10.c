#include <stdio.h>

void vogal (char letra){
    if(letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o' ||letra == 'u'){
        printf("Vogal");
    }
    else{
        printf("n eh vogal");
    }
}

int main(){
    char letra;
    scanf("%s", &letra);

    vogal(letra);
  
  return 0;
}