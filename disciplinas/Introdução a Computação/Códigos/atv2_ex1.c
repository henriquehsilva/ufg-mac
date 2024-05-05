/**
 * ALUNO						            MATRICULA
 * Henrique Honório da Silva		202406501
 * 
 * Defina um programa que leia três valores inteiros e distintos e mostre-os em 
 * ordem crescente. Utilize uma seleção encadeada na definição do algoritmo.
 * 
 * 
 * DATA DE INICIO: 23/04/2024 
 * DATA FINAL:		 24/04/2024
 **/

#include <stdio.h>

int main(){

 int valor_1, valor_2, valor_3;

  printf("Digite o primeiro valor: ");
  scanf("%d", &valor_1);

  printf("Digite o segundo valor: ");
  scanf("%d", &valor_2);

  printf("Digite o terceiro valor: ");
  scanf("%d", &valor_3);

  if (valor_1 < valor_2 & valor_1 < valor_3) {
    if (valor_2 < valor_3) {
      printf("%d %d %d\n", valor_1, valor_2, valor_3);
    } else {
      printf("%d %d %d\n", valor_1, valor_3, valor_2);
    }
  } else if (valor_2 < valor_1 & valor_2 < valor_3) {
    if (valor_1 < valor_3) {
      printf("%d %d %d\n", valor_2, valor_1, valor_3);
    } else {
      printf("%d %d %d\n", valor_2, valor_3, valor_1);
    }
  } else {
    if (valor_1 < valor_2) {
      printf("%d %d %d\n", valor_3, valor_1, valor_2);
    } else {
      printf("%d %d %d\n", valor_3, valor_2, valor_1);
    }
  }

  return 0;
}