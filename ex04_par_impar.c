/*
Ejercicio 4:
Leer un número e indicar si es par o impar.
*/
#include <stdio.h>

void ex04_par_impar() {
	int a;

	printf("Ingrese un numero: ");
	scanf_s("%d", &a);

	if (a % 2 == 0) {
		printf("Par\n");
	} else {
		printf("Impar\n");
	}
}
