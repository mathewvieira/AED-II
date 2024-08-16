// calculadora

#include <stdio.h>

int atv1(void) {
  float n1 = 0.0, n2 = 0.0;
  char op;

  scanf("Informe os números que serão calculados mediante"
        "o operador aritmético (ex: 2+2; 5 / 2): %f %c %f",
        &n1, &op, &n2);

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
    printf("Operação inválida");
  }

  printf("Resultado = %f", n1);

  return 0;
}
