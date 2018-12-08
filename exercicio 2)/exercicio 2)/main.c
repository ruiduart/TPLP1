/*
LESI 18/19

Trabalho prático LP1

Nome:		Rui Jorge Duarte Silva
Numero:		15831

*/

#include "Header.h"

int main(){

 // declaração e inicialização de variaveis
 int saldo = 0;
 int idade = 0;
 int tipo = 0;
 int bonus = 0;


	printf("\nSaldo medio:\n\n");

	scanf_s("%d", &saldo);	// atribui valor do saldo medio à variavel saldo

	printf("\nIdade da conta:\n\n");

	scanf_s("%d", &idade);	// atribui valor da idade da conta à variavel idade

	printf("\nTipo de conta:\n\n");

	scanf_s("%d", &tipo);	// atribui o valor do tipo de conta à variavel tipo

	printf("*** CONTA ***\n\ntipo de conta:");

	tipoConta(tipo);		//chama a função tipo conta para mostrar o tipo de conta
							//mostra o numero de anos da conta e o saldo medio
	printf("numero de anos de conta: %d \nSaldo medio durante o ano: %d",idade,saldo);
							//chama a função premio() e mostra o premio da conta
	printf("\nPremio da conta e: %d ", premio(saldo, tipo, idade));








}