#include <stdio.h>

int main ()
{
   float horas, segundos, minutos, tempoSegundos;

   printf("DIGITE SOMENTE A HORA: ");
    scanf("%f", &horas);
   printf("DIGITE SOMENTE OS MINUTOS: ");
    scanf("%f", &minutos);
   printf("DIGITE SOMENTE OS SEGUNDOS: ");
    scanf("%f", &segundos);

    tempoSegundos = horas * 3600 + minutos * 60 + segundos;
  
  printf("TEMPO EM SEGUNDOS: %.f\n", tempoSegundos);


return 0;


}