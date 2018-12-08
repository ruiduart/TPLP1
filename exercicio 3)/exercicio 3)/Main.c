/*
Cadeira:			LP1
Nome:				Rui Duarte
Numero de aluno:	15831


*/
#include "Header.h"

int main(){
	int numero = 0;

	printf("Introduza um numero inteiro\n\n");
	scanf_s("%d", &numero);
	printf("a soma de todos os numeros pares de [0;%d] e %d", numero, somaPares(numero));
}