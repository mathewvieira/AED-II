// calculadora

#include <stdio.h>

int atv1(void) {
  int opcao = 0;

  scanf("%i", &opcao);

  switch (opcao) {
  case 1:
    atv1();
    break;
  case 2:
    atv2();
    break;
  case 3:
    atv3();
    break;
  default:
    printf("Opção inválida");
  }

  printf("Resultado = %i\n", n1);

  return 0;
}