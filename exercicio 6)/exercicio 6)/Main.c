/*
Cadeira:			LP1
Nome:				Rui Duarte
Numero de aluno:	15831


*/

#include "Header.h"

int main() {
	char genero;
	char gostaCurso;
	int curso;
	int idade;
	float masculino = 0;
	float feminino = 0;
	int verificar = 1;
	int contador = 0;
	int totalPessoas = 0;
	float percentmas = 0;
	float percentfem = 0;
	int generoInvalido = 1;

	while (verificar) {




		printf("\t\tPor favor introduza os dados do aluno\n");

		fseek(stdin, 0, SEEK_END);
		do {
			printf("Selecione 'm' para masculino e 'f' para feminino\n genero :");
			scanf_s("%c", &genero);
		
			if (genero == 'm' || genero == 'M') {
				masculino++;

			}
			if (genero == 'f' || genero == 'F') {
				feminino++;
			}
			else {
				printf("Caracter invalido quer tentar novamente ?\nInsira 1 pra continuar ou 0 para parar programa");
				scanf_s("%d", &generoInvalido);
				
			}
		} while (generoInvalido);
		printf("Idade : ");
		scanf_s("%d", &idade);

		fseek(stdin, 0, SEEK_END);

		printf("Esta a gostar do curso insira 's' para sim e 'n' para nao : ");
		scanf_s("%c", &gostaCurso);

		fseek(stdin, 0, SEEK_END);

		if ((genero == 'm' || genero == 'M') &&
			(idade < 23) &&
			(gostaCurso == 'n' || gostaCurso == 'N')) {
			contador++;
		}

		printf("Introduza 0 para parar ou qualquer outro valor para continuar \n");
		scanf_s("%d", &verificar);
	
		fseek(stdin, 0, SEEK_END);

		totalPessoas++;
	}

	percentmas = (masculino / totalPessoas) *100;
	percentfem = (feminino / totalPessoas) *100;


	printf("O total de pessoas entrevistadas e : %d \n\n", totalPessoas);

	printf("A percentagem de pessoas de sexo masculino e de : %3.2f porcento \nE a de pessoas do sexo feminino e de : %3.2f porcento\n", percentmas, percentfem);

	printf("O numero de pessoas do sexo masculino com menos de 23 anos e que nao estao a gostar do curso e : %d", contador);


}