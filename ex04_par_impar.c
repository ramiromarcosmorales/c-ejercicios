/*
Ejercicio 4:
Leer un número e indicar si es par o impar.
*/
#include <stdio.h>

int main()
{
	int a;

	printf("Ingrese un numero: ");
	scanf_s("%d", &a);

	if (a % 2 == 0) {
		printf("Par\n");
	} else {
		printf("Impar\n");
	}

	return 0;
}
