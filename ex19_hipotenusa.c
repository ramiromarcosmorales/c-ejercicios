#define _USE_MATH_DEFINES
#include <stdio.h>
#include <math.h>

void ex19_hipotenusa() {
	double a, b;

	do {
		printf("Ingresa el primer cateto: ");
		scanf_s("%lf", &a);
	} while (a < 0);

	do {
		printf("Ingresa el segundo cateto: ");
		scanf_s("%lf", &b);
	} while (b < 0);

	a = a * a;
	b = b * b;
	double c = a + b;
	double e = sqrt(c);

	printf("El resultado es: %.2f", e);
}