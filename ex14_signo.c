/*
Ejercicio 14:
Leer un número y determinar si es positivo, negativo o cero.
*/
#include <stdio.h>

void ex14_signo() {
	double num;

	printf("Ingrese un numero: ");
	scanf_s("%lf", &num);

	if (num > 0) {
		printf("%.2lf es POSITIVO\n", num);
	}
	else if (num < 0) {
		printf("%.2lf es NEGATIVO\n", num);
	}
	else {
		printf("%.2lf es CERO\n", num);
	}
}