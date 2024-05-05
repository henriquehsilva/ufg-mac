/**
 * ALUNO						            MATRICULA
 * Henrique Honório da Silva		202406501
 * 
 * Defina um programa que solicite o código correspondente a uma figura geométrica como na tabela
 * abaixo e, em cada caso, solicite as informações necessárias para o cálculo de área
 * da figura correspondente. Retorne uma mensagem identificando qual é a de área calculado.
 * 
 * Codigo Figura Geometrica
 * 1      Triângulo
 * 2      Quadrado
 * 3      Retângulo
 * 4      Circunferência
 * 
 * DATA DE INICIO: 23/04/2024 
 * DATA FINAL:		 24/04/2024
 **/

#include <stdio.h>
#include <math.h>

int main(){

  int codigo;
  float area, base, altura, raio;

  printf("Código\tFigura Geométrica\n");
  
  printf("1\tTriângulo\n");
  printf("2\tQuadrado\n");
  printf("3\tRetângulo\n");
  printf("4\tCircunferência\n");

  printf("Digite o codigo da figura geometrica: ");
  scanf("%d", &codigo);

  switch (codigo) {
    case 1:
      printf("Digite a base do triângulo: ");
      scanf("%f", &base);
      printf("Digite a altura do triângulo: ");
      scanf("%f", &altura);
      area = (base * altura) / 2;
      printf("A área do triângulo é %.2f\n", area);
      break;
    case 2:
      printf("Digite o lado do quadrado: ");
      scanf("%f", &base);
      area = base * base;
      printf("A área do quadrado é %.2f\n", area);
      break;
    case 3:
      printf("Digite a base do retângulo: ");
      scanf("%f", &base);
      printf("Digite a altura do retângulo: ");
      scanf("%f", &altura);
      area = base * altura;
      printf("A área do retângulo é %.2f\n", area);
      break;
    case 4:
      printf("Digite o raio da circunferência: ");
      scanf("%f", &raio);
      area = M_PI * raio * raio;
      printf("A área da circunferência é %.2f\n", area);
      break;
    default:
      printf("Código invalido\n");
  }

  return 0;
}