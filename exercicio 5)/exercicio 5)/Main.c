/*
Cadeira:			LP1
Nome:				Rui Duarte
Numero de aluno:	15831


*/
#include "Header.h"

int main() {
	int peso = 1;
	int totalPessoas = 0;
	 // while continua ate o user inserir 0
	while (peso != 0) {

		printf("Insira peso. Para parar execucao insira 0\n");
		scanf_s("%d", &peso);
		// se o peso inserido estiver comprimido entre [50 e 80] entao é contada em totalPessoas 
		if (peso >= 50 && peso <= 80) {

			totalPessoas++;	
		}			
	}

	printf("sao %d as pessoas com peso entre 50 e 80 kg", totalPessoas);
}