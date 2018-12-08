/*
Cadeira:			LP1
Nome:				Rui Duarte
Numero de aluno:	15831


*/
#include "Header.h"


int somaPares(numero) {
	int i = 0;
	int somatorio = 0;

	while (i <= numero) {
		somatorio += i;
		i += 2;
	}
	return somatorio;
}