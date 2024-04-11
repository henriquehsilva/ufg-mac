/**
 * ALUNO						MATRICULA
 * Nome				            0000000-0
 * 
 * DESCRICAO DO TRABALHO:
 * 
 *
 *		
 * 
 * DATA DE INICIO:	??/??/2024 
 * DATA FINAL:		??/??/2024
 **/
 
/* = INCLUSAO DE BIBLIOTECAS ================================================ */ 
#include <stdio.h>

/* Programa que calcula media aritmetica de duas notas */
int main(){

 float n1, n2;
 
 n1 = 0;
 n2 = 0;
 
 printf("Digite a primeira nota: ");
 scanf("%f", &n1);
 printf("Digite a segunda nota: ");
 scanf("%f", &n2);
 
 printf("\nA média é %f\n", (n1+n2)/2);
 // media com duas casas decimais
 printf("A média é %.2f\n", (n1+n2)/2);
 // media em notacao cientifica
 printf("A média é %e\n", (n1+n2)/2);
 
 return 0;

}					
