// calculadora

#include <stdio.h>

int atv1(void) {
  int n1 = 0, n2 = 0;
  char op;

  scanf("%i %c %i", &n1, &op, &n2);

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

  printf("Resultado = %i\n", n1);

  return 0;
}