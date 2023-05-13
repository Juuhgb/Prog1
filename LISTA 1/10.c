#include <stdio.h>

int main(){
 float combustivel, distancia, consumo;

 printf("COMBUSTIVEL: ");
 scanf("%f", &combustivel);
  printf("DISTANCIA: ");
 scanf("%f", &distancia);


 consumo = distancia / combustivel;
 
 printf("CONSUMO MEDIO DO VEICULO: %.2f\n", consumo);

    return 0;
}