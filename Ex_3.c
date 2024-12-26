#include <stdio.h>
 
#define TAMANHO 10
 
int main(void) {
  // Declara um vetor de inteiros com 10 elementos
  int vetor[TAMANHO] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
 
  // Exibe o conteúdo do vetor
  printf("Conteudo do vetor:\n");
  for (int i = 0; i < TAMANHO; i++) {
printf("%d ", vetor[i]);
  }
  printf("\n");
 
  // Declara uma matriz de inteiros com 3 linhas e 2 colunas
  int matriz[3][2] = {
{1, 2},
{3, 4},
{5, 6}
  };
 
  // Exibe o conteúdo da matriz
  printf("Conteudo da matriz:\n");
  for (int i = 0; i < 3; i++) {
for (int j = 0; j < 2; j++) {
  printf("%d ", matriz[i][j]);
}
printf("\n");
  }
 
  return 0;
}