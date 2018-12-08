/*
LESI 18/19

Trabalho prático LP1

Nome:		Rui Jorge Duarte Silva
Numero:		15831

*/




#include "Header.h"

int main() {

			// Declaração e Inicialização das variaveis. que guardam as idades das 5 pessoas diferentes.
	int idade1 = 0;
	int idade2 = 0;
	int idade3 = 0;
	int idade4 = 0;
	int idade5 = 0;



	printf("digite idade do primeiro sujeito:");	// pergunta idade da primeira pessoa
	scanf_s("%d", &idade1);							// Guarda valor da idade em idade1
	printf("digite idade do segundo sujeito:");		
	scanf_s("%d", &idade2);
	printf("digite idade do terceiro sujeito:");
	scanf_s("%d", &idade3);
	printf("digite idade do quarto sujeito:");
	scanf_s("%d", &idade4);
	printf("digite idade do quinto sujeito:");
	scanf_s("%d", &idade5);

			//Mostra o valor retornado da função MediaDeIdades() com duas udidades e duas casas decimais
	printf("a media de todas as idades e: %2.2f\n", MediaDeIdades(idade1, idade2, idade3, idade4, idade5)); 
	
			//Mostra o valor retornado da função SomaDeIdades()
	printf("a soma das idades acima de 20 e: %d\n", SomaDeIdades(idade1, idade2, idade3, idade4, idade5));






}