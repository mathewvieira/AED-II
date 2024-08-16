// planilha de notas de alunos

#include "atv3.h"
#include <stdio.h>

void printPlanilha(int rows, int cols, float vetor[rows][cols]) {
  printf("+---------+-------+-------+-------+-------+------------+\n");
  printf("|                                                      |\n");
  printf("|               .:: Planilha de notas ::.              |\n");
  printf("|                                                      |\n");
  printf("+---------+-------+-------+-------+-------+------------+\n");
  printf("|         |  AV1  |  AV2  |  AVF  | MEDIA |   STATUS   |\n");
  printf("+---------+-------+-------+-------+-------+------------+\n");

  for (int i = 0; i < rows; i++) {
    printf("| Aluno %d ", i + 1);

    for (int j = 0; j < cols; j++) {
      if (j == 3) {
        printf("|  %4.1f ", vetor[i][j]);

        if (vetor[i][j] >= 7.0) {
          printf("|   Aprovado ");
        } else {
          printf("|  Reprovado ");
        }
      } else {
        printf("|  %4.1f ", vetor[i][j]);
      }
    }

    printf("|\n");
  }

  printf("+---------+-------+-------+-------+-------+------------+\n");
}

int indiceMenorValor(int indice, int rows, int cols, float vetor[rows][cols]) {
  int indiceAux = indice;
  for (int i = indice + 1; i < rows; i++) {
    if (vetor[indiceAux][cols - 1] > vetor[i][cols - 1]) {
      indiceAux = i;
    }
  }
  return indiceAux;
}

void selectSort(int rows, int cols, float vetor[rows][cols]) {
  float aux;
  int indiceAux, cont = 0;

  for (int i = 0; i < rows; i++) {
    indiceAux = indiceMenorValor(i, rows, cols, vetor);

    for (int j = 0; j < cols; j++) {
      aux = vetor[i][j];
      vetor[i][j] = vetor[indiceAux][j];
      vetor[indiceAux][j] = aux;

      cont++;
    }
  }

  printf("SelectSort: %d\n\n", cont);
  printPlanilha(rows, cols, vetor);
}

void bubbleSort(int rows, int cols, float vetor[rows][cols]) {
  float aux;
  int cont = 0;

  for (int i = rows; i > 0; i--) {
    for (int j = 0; j < i - 1; j++) {
      if (vetor[j][cols - 1] > vetor[j + 1][cols - 1]) {
        for (int k = 0; k < cols; k++) {
          aux = vetor[j][k];
          vetor[j][k] = vetor[j + 1][k];
          vetor[j + 1][k] = aux;

          cont++;
        }
      }
    }
  }

  printf("BubbleSort: %d\n\n", cont);
  printPlanilha(rows, cols, vetor);
}

void insertSort(int rows, int cols, float vetor[rows][cols]) {
  float aux;
  int j = 0, cont = 0;

  // ESTÁ MOVENDO SOMENTE A COLUNA DA MÉDIA

  for (int i = 1; i < rows; i++) {
    aux = vetor[i][cols - 1];
    j = i - 1;

    while ((j >= 0) && (vetor[j][cols - 1] > aux)) {
      vetor[j + 1][cols - 1] = vetor[j][cols - 1];
      j--;

      cont++;
    }
    vetor[j + 1][cols - 1] = aux;
  }

  printf("InsertSort: %d\n\n", cont);
  printPlanilha(rows, cols, vetor);
}

void planilhaNotas() {
  const int QTD_ALUNOS = 5, QTD_NOTAS = 4;

  float planilha[QTD_ALUNOS][QTD_NOTAS];
  float media = 0.0;

  for (int i = 0; i < QTD_ALUNOS; i++) {
    for (int j = 0; j < QTD_NOTAS; j++) {
      if ((j == 0) || (j == 1)) {
        printf("Informe a AV%d do Aluno %d: ", i + 1, i + 1);
        scanf(" %f", &planilha[i][j]);
      }

      if (j == 2) {
        media = planilha[i][j - 2] + planilha[i][j - 1];
        media = media / 2;

        if ((media >= 4.0) && (media < 7.0)) {
          printf("Informe a AVF do Aluno %d: ", i + 1);
          scanf(" %f", &planilha[i][j]);
        } else {
          planilha[i][j] = 0.0;
        }
      }

      if (j == 3) {
        if (planilha[i][j - 1] != 0.0) {
          media = planilha[i][j - 3] + planilha[i][j - 2] + planilha[i][j - 1];
          media = media / 3;
        }
        planilha[i][j] = media;
      }
    }
    printf("\n");
  }

  printPlanilha(QTD_ALUNOS, QTD_NOTAS, planilha);

  printf("\n\n");

  // https://youtu.be/0-W8OEwLebQ
  // selectSort(QTD_ALUNOS, QTD_NOTAS, planilha);

  // https://youtu.be/Iv3vgjM8Pv4
  // bubbleSort(QTD_ALUNOS, QTD_NOTAS, planilha);

  // https://youtu.be/EdIKIf9mHk0
  insertSort(QTD_ALUNOS, QTD_NOTAS, planilha);
}
