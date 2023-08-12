#include <stdio.h>

int segundos (int hora, int minuto, int seg){
    hora = hora * 3600;
    minuto = minuto * 60;
    return hora + minuto + seg;
}

int main(){
    int hora, minuto, seg, resultado;
    scanf("%d", &hora);
    scanf("%d", &minuto);
    scanf("%d", &seg);
    resultado = segundos(hora, minuto, seg);

    printf("%d", resultado);
    
  return 0;
}