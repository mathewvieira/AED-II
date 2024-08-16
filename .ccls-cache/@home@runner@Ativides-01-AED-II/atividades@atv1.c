#include "atv1.h"
#include <stdio.h>

void calculadora() {
  float n1 = 0.0, n2 = 0.0;
  char op;

  printf("Informe os números que serão calculados mediante"
         "o operador aritmético (ex: 2+2; 5 / 2): ");
  scanf(" %f %c %f", &n1, &op, &n2);

  printf("\n");

  switch (op) {
  case '+':
    n1 = n1 + n2;
    break;
  case '-':
    n1 = n1 - n2;
    break;
  case '*':
    n1 = n1 * n2;
    break;
  case '/':
    n1 = n1 / n2;
    break;
  default:
    printf("Operação inválida.");
  }

  printf("Resultado = %0.2f", n1);
}
