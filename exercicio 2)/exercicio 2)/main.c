/*
LESI 18/19

Trabalho pr�tico LP1

Nome:		Rui Jorge Duarte Silva
Numero:		15831

*/

#include "Header.h"

int main(){

 // declara��o e inicializa��o de variaveis
 int saldo = 0;
 int idade = 0;
 int tipo = 0;
 int bonus = 0;


	printf("\nSaldo medio:\n\n");

	scanf_s("%d", &saldo);	// atribui valor do saldo medio � variavel saldo

	printf("\nIdade da conta:\n\n");

	scanf_s("%d", &idade);	// atribui valor da idade da conta � variavel idade

	printf("\nTipo de conta:\n\n");

	scanf_s("%d", &tipo);	// atribui o valor do tipo de conta � variavel tipo

	printf("*** CONTA ***\n\ntipo de conta:");

	tipoConta(tipo);		//chama a fun��o tipo conta para mostrar o tipo de conta
							//mostra o numero de anos da conta e o saldo medio
	printf("numero de anos de conta: %d \nSaldo medio durante o ano: %d",idade,saldo);
							//chama a fun��o premio() e mostra o premio da conta
	printf("\nPremio da conta e: %d ", premio(saldo, tipo, idade));








}