#include "atv2.h"
#include <stdio.h>

void converterTemperatura() {
  float temp = 0.0;
  char escalaOriginal, escalaConverter;

  scanf("Informe a temperatura a ser convertida.\n\n"
        "Digite a temperatura e a letra da escala (ex: C, F, K) aqui: %f %c",
        &temp, &escalaOriginal);

  printf("\n\n");

  switch (escalaOriginal) {
  case 'C':
    scanf("Informe a escala Fahrenheit (F) ou Kelvin (K)\n\n"
          "Digite a letra (ex: F, K): %c",
          &escalaConverter);
    break;
  case 'F':
    scanf("Informe a escala Celsius (C) ou Kelvin (K)\n\n"
          "Digite a letra (ex: F, K): %c",
          &escalaConverter);
    break;
  case 'K':
    scanf("Informe a escala Celsius (C) ou Fahrenheit (F)\n\n"
          "Digite a letra (ex: C, F): %c",
          &escalaConverter);
    break;
  }

  printf("\n\n");

  switch (escalaOriginal) {
  case 'C':
    if (escalaConverter == 'F') {
      temp = temp * 1.8 + 32;
    }
    if (escalaConverter == 'K') {
      temp = temp + 273;
    }
    break;
  case 'F':
    if (escalaConverter == 'C') {
      temp = (temp - 32) / 1.8;
    }
    if (escalaConverter == 'K') {
      temp = (temp - 32) * (5 / 9) + 273;
    }
    break;
  case 'K':
    if (escalaConverter == 'C') {
      temp = temp - 273;
    }
    if (escalaConverter == 'F') {
      temp = (temp - 273) * 1.8 + 32;
    }
    break;
  default:
    printf("Escala inválida");
  }

  printf("Resultado = %f %c", temp, escalaConverter);
}
