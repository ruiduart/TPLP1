/*
LESI 18/19

Trabalho prático LP1

Nome:		Rui Jorge Duarte Silva
Numero:		15831

*/


int premio(saldo, tipo,idade) {
	int bonus = 0;			// a variavel é inicializada com 0

	if (saldo > 100000) {	// se a variavel saldo for superior a 100000(euros) segue para a proxima condição

		if (idade > 10) {	// se a variavel idade for superior a 10(anos) segue para a proxima condição

			bonus = saldo * 0.01;	// atribui a vairavel bonus 1% do valor do saldo
			if (tipo == 1) {		// atribui bonus de dinheiro de acordo com o tipo de conta
				bonus += 150;
			}
			if (tipo == 2) {
				bonus += 100;
			}
			if (tipo == 3) {
				bonus += 75;
			}
			if (tipo == 4) {		// nao existe if para o tipo de conta 5 porque nao recebe bonus
				bonus += 40;
			}
		}
	}
	return bonus;			// se bonus nao sofrer alterações retorna 0
}

int tipoConta(tipo) {
	
			// verifica o valor de tipo e apresenta o tipo de conta correspondente

	if (tipo == 1) {
		printf("Empresarial Gold\n");
	}
	if (tipo == 2) {
		printf("Empresarial Silver\n");
	}
	if (tipo == 3) {
		printf("Particular Gold\n");
	}
	if (tipo == 4) {
		printf("Particular Silver\n");
	}
	if (tipo == 5) {
		printf("Outro\n");
	}

}