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


	switch (tipo)
	{
	case 1 :
		printf("Empresarial Gold\n");
		break;
	case 2 : 
		printf("Empresarial Silver\n");
		break;
	case 3 :
		printf("Particular Gold\n");
		break;
	case 4 :
		printf("Particular Silver\n");
		break;
	case 5 :
		printf("Outro\n");	
		break;
	default :
		printf("Conta invalida");
		break;
	}


}