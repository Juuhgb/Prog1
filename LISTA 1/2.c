#include <stdio.h>

int main()
{
  float nota1, nota2, nota3, nota4, notaFinal;

  printf("NOTA DO PRIMEIRO BIMESTRE: ");
  scanf("%f", &nota1);
  printf("NOTA DO PRIMEIRO SEGUNDO: ");
  scanf("%f", &nota2);
  printf("NOTA DO PRIMEIRO TERCEIRO: ");
  scanf("%f", &nota3);
  printf("NOTA DO PRIMEIRO QUARTO: ");
  scanf("%f", &nota4);

  notaFinal = (nota1 * 1.5 + nota2 * 2 + nota3 * 3 + nota4 * 3.5) / 100;

  printf("SUA MEDIA: ");
  printf("%.2f", notaFinal);

  return 0;
}
