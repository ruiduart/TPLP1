/*
LESI 18/19

Trabalho prático LP1

Nome:		Rui Jorge Duarte Silva
Numero:		15831

*/

#include "Header.h"

float MediaDeIdades(int idade1,int idade2,int idade3,int idade4,int idade5) {

						// Inicializa a variavel media com todos os valores das variaveis de idade
	float media = idade1 + idade2 + idade3 + idade4 + idade5; 
	media /= 5;			// faz a media das idades dividindo "media" por 5

	return media;		// retorna media
}
int SomaDeIdades(int idade1, int idade2, int idade3, int idade4, int idade5) {

	int soma = 0;		// Guarda a soma de todas idades superiores a 20
	if (idade1 > 20)	// Se o valor guardado em idade1 for superior a 20, soma toma o valor de idade1
		soma = idade1;
	if (idade2 > 20)	// Se o valor guardado em idade2 for superior a 20, é adicionado a soma
		soma += idade2;
	if (idade3 > 20)
		soma += idade3;
	if (idade4 > 20)
		soma += idade4;
	if (idade5 > 20) 
		soma += idade5; 

	return soma;		// retorna o valor da soma

}