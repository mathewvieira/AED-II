#include "atv2.h"
#include <stdio.h>

void converterTemperatura() {
  float temp = 0.0;
  char escalaOriginal, escalaConverter;

  printf("Informe a temperatura e a letra da escala "
         "a ser convertida (ex: 45C, 85 F, 200K): ");
  scanf(" %f %c", &temp, &escalaOriginal);

  printf("\n");

  switch (escalaOriginal) {
  case 'C':
    printf("Informe se deseja converter para Fahrenheit (F) ou Kelvin (K): ");
    break;
  case 'F':
    printf("Informe se deseja converter para Celsius (C) ou Kelvin (K): ");
    break;
  case 'K':
    printf("Informe se deseja converter para Celsius (C) ou Fahrenheit (F): ");
    break;
  default:
    printf("Escala da temperatura original inválida.\n");
  }

  scanf(" %c", &escalaConverter);

  if ((escalaConverter != 'C') && (escalaConverter != 'F') &&
      (escalaConverter != 'K')) {
    printf("\nEscala para conversão inválida.\n");
  }

  printf("\n");

  switch (escalaOriginal) {
  case 'C':
    if (escalaConverter == 'F') {
      temp = (temp * 1.8) + 32;
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
  }

  printf("Resultado = %0.2f %c", temp, escalaConverter);
}
