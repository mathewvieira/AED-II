#include "atividades/atv1.h"
#include "atividades/atv2.h"
#include "atividades/atv3.h"
#include <stdio.h>

int main(void) {
  int opcao = 0;

  printf("1. Calculadora\n");
  printf("2. Converter Temperatura\n");
  printf("3. Planilha de Notas\n");

  printf("\n--------------------------------------\n\n");

  printf("Informe a atividade que você deseja: ");
  scanf("%i", &opcao);

  printf("\n--------------------------------------\n\n");

  switch (opcao) {
  case 1:
    calculadora();
    break;
  case 2:
    converterTemperatura();
    break;
  case 3:
    planilhaNotas();
    break;
  default:
    printf("Opção inválida.");
  }

  return 0;
}