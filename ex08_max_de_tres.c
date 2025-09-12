/*
Ejercicio 8:
Leer tres números e indicar cuál es el mayor.
*/
#include <stdio.h>

void ex08_max_de_tres() {
	int a, b, c;
	
	printf("Ingrese el primer numero: ");
	scanf_s("%d", &a);

	printf("Ingrese el segundo numero: ");
	scanf_s("%d", &b);

	printf("Ingrese el tercer numero: ");
	scanf_s("%d", &c);

	if (a > b && a > c) {
		printf("A es mayor!");
	}
	else if (b > a && b > c) {
		printf("B es mayor!");
	}
	else if (c > a && c > b) {
		printf("C es mayor!");
	}
	else if (a == b && a == c) {
		printf("Los tres son iguales");
	}
	else if (a == b && a > c) {
		printf("A y B son iguales y son mayores que C");
	}
	else if (a == c && a > b) {
		printf("A y C son iguales y son mayores que B");
	}
	else if (b == c && b > a) {
		printf("B y C son iguales y son mayores que A");
	}
}
