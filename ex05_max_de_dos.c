/*
Ejercicio 5:
Leer dos números e indicar cuál es mayor.
*/
#include <stdio.h>

void ex05_max_de_dos() {
	int a, b;

	printf("Ingrese el primer numero: ");
	scanf_s("%d", &a);

	printf("Ingrese el segundo numero: ");
	scanf_s("%d", &b);

	if (a > b) {
		printf("%d es MAYOR\n", a);
	} else if (b > a) {
		printf("%d es MAYOR\n", b);
	} else {
		printf("Ambos son iguales\n");
	}
}
