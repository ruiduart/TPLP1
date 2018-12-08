/*
Cadeira:			LP1
Nome:				Rui Duarte
Numero de aluno:	15831


*/
#include <stdio.h>


int main() {

	int capicua;
	
	int numero1 = 100;
	int numero2 = 100;
	int produto = 0;
	int resto = 0;
	int numeroInverso = 0;
	int maiorMultiplicador;
	int maiorMultiplicado;
	int produtoFinal;
	int capicuaMaior = 100;
	
	// os dois ciclos while testam todas as multiplicações entre dois numeros ate 999
	while (numero1 < 1000) {

		while (numero2 < 1000) {
			produto = numero1 * numero2;
			
			produtoFinal = produto;

			// ciclo while inverte o numero para depois comparar com ele proprio
			while (produto >= 1)
			{	
				resto = produto % 10;
				numeroInverso = numeroInverso * 10 + resto;
				//numero inteiro produto ignora a parte decimal
				produto /= 10;

			}
			// compara produto com ele proprio se for igual entao é capicua
			if (numeroInverso == produtoFinal) {

				capicua = produtoFinal;
				// guarda em capicuaMaior o a capicua maior ate agora encontrada
				if (capicua > capicuaMaior) {


					capicuaMaior = capicua;
					//guarda tambem maior multiplicador e maior multipicado
					maiorMultiplicador = numero1;
					maiorMultiplicado = numero2;

				}
			}			
			numero2++;
			numeroInverso = 0;
		}
		numero1++;
		numero2 = 101;		
	}
	printf("maior multiplicador = %d\nmaior multiplicado = %d\n", maiorMultiplicador, maiorMultiplicado);
	printf("A maior capicua possivel e %d", capicuaMaior);


}