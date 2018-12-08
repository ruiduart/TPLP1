/*
Cadeira:			LP1
Nome:				Rui Duarte
Numero de aluno:	15831


*/

#include "Header.h"

int main() {
	char genero;
	int gen;
	char gostaCurso;
	int curso;
	int idade;
	float masculino = 0;
	float feminino = 0;
	int verificar = 0;
	int contador = 0;
	int totalPessoas = 0;
	float percentmas = 0;
	float percentfem = 0;

	bool continuar = true;




	while (continuar != false) {
		

		
		
		printf("\t\tPorfavor introduza os dados do aluno\n selecione 'm' para masculino e 'f' para feminino\n genero: ");
		scanf_s("%c", &genero);

		fseek(stdin, 0, SEEK_END);

		gen = genero;

		if (gen == 109 || gen == 77) {
			masculino++;

		}
		if (gen == 102 || gen == 70) {
			feminino++;
		}
		else if (gen != 109 && gen != 102) {
			printf("caracter invalido tente novamente");
			break;
		}
		printf("idade:");
		scanf_s("%d", &idade);

		fseek(stdin, 0, SEEK_END);

		printf("Esta a gostar do curso insira 's' para sim e 'n' para nao: ");
		scanf_s("%c", &gostaCurso);

		fseek(stdin, 0, SEEK_END);
		curso = gostaCurso;

		if (gen == 109 || 77) {

			if (idade < 23) {

				if (curso == 110 || curso == 78) {

					contador++;

				}
			}
		}

		printf("introduza 1 para continuar ou 0 para parar");
		scanf_s("%d", &verificar);

		if (verificar == 0) {
			continuar = false;

		}
		if (verificar == 1) {
			continuar = true;
		}

		fseek(stdin, 0, SEEK_END);

		totalPessoas++;

	}
	percentmas = masculino / totalPessoas ;
	percentmas *= 100;
	percentfem = feminino / totalPessoas ;
	percentfem *= 100;

	printf("o total de pessoas intrevistadas e : %d \n\n", totalPessoas);

	printf("a percentagem de pessoas de sexo masculino e de : %3.2f porcento \n e a de pessoas do sexo feminino é de : %3.2f porcento\n", percentmas, percentfem);

	printf("o numero de pessoas do sexo masculino com menos de 23 anos e que nao estam a gostar do curso e : %d", contador);


}