// conversor de temperatura

#include <stdio.h>

int atv2(void) {
  int temp = 0;
  char escalaOriginal, escalarConverter;

  scanf("Informe a temperatura a ser convertida.\n\n"
        "Digite a temperatura e a letra da escala (ex: C, F, K) aqui: %i %c",
        &temp, &escalaOriginal);

  switch (escalaOriginal) {
  case 'C':
    scanf("Informe a escala Fahrenheit (F) ou Kelvin (K)\n\n"
          "Digite a letra (ex: F, K): %c",
          &escalarConverter);
    break;
  case 'F':
    scanf("Informe a escala Celsius (C) ou Kelvin (K)\n\n"
          "Digite a letra (ex: F, K): %c",
          &escalarConverter);
    break;
  case 'K':
    scanf("Informe a escala Celsius (C) ou Fahrenheit (F)\n\n"
          "Digite a letra (ex: C, F): %c",
          &escalarConverter);
    break;
  }

  switch (escalarConverter) {
  case 'C':
    if (escalaOriginal == 'F') {
      temp = (9 / 5 * temp) - 32;
    } else
      temp = (9 / 5 * temp) - 32;
    break;
  case 'F':
    temp = temp;
    break;
  case 'K':
    temp = temp;
    break;
  default:
    printf("Escala inválida");
  }

  printf("Resultado = %i\n %c", temp, escalarConverter);

  return 0;
}