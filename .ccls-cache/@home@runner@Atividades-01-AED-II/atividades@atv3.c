// planilha de notas de alunos

#include "atv3.h"
#include <stdio.h>

void planilhaNotas() {

  // linhas alunos
  // colunas notas

  int qtdAlunos = 5, qtdNotas = 4;
  float planilha[qtdAlunos][qtdNotas];
  float media = 0.0;

  // entre 4 e menor do que 7 faz avf
  // abaixo de 4 reprovado
  // acima ou igual a 7 aprovado

  for (int i = 0; i < qtdAlunos; i++) {
    for (int j = 0; j < qtdNotas; j++) {
      media = 0.0;
      printf("\n");
      switch (j) {
      case (0):
        planilha[qtdAlunos][qtdNotas] = i + 1;
        break;
      case (1):
        printf("Informe a AV1 do Aluno %i: ", i + 1);
        scanf(" %f", &planilha[qtdAlunos][qtdNotas]);
        break;
      case (2):
        printf("Informe a AV2 do Aluno %i: ", i + 1);
        scanf(" %f", &planilha[qtdAlunos][qtdNotas]);
        break;
      case (3):
        media = (planilha[qtdAlunos][1] + planilha[qtdAlunos][2]) / 2;
        
        // reprovado
        if (media < 4) {
          planilha[qtdAlunos][qtdNotas] = 999;
        }

        // fazer avf
        if ((media >= 4) && (media < 7)) {
          printf("Informe a AVF do Aluno %i: ", i + 1);
          scanf(" %f", &planilha[qtdAlunos][qtdNotas]);
        }

        // aprovado
        if (media > 7) {
          planilha[qtdAlunos][qtdNotas] = 12345;
        }
        break;
      }
    }
    printf("\n");
  }

  printf("+---------+-----+-----+-----+\n");
  printf("|  .:: Tabela de notas ::.  |\n");
  printf("+---------+-----+-----+-----+\n");
  printf("|   Aluno | AV1 | AV2 | AVF |\n");
  printf("+---------+-----+-----+-----+\n");

  for (int i = 0; i < qtdAlunos; i++) {
    printf("|      %f | %f | %f | %f |\n", planilha[qtdAlunos][0],
           planilha[qtdAlunos][1], planilha[qtdAlunos][2],
           planilha[qtdAlunos][3]);
  }
}
