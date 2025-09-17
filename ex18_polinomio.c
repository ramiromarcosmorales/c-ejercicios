#define _USE_MATH_DEFINES
#include <stdio.h>
#include <math.h>

void ex18_polinomio() {
	/*
	P(x) = 2x²-x-6
	a = 2
	b = -1
	c = -6
	d = b²-4ac
	d = -1²-4.2.(-6)
	*/

	int a = 2;
	int b = -1;
	int c = -6;
	double d = sqrt(pow(b, 2) - 4 * a * c);
	double e = (-b + d) / (2 * a);
	double f = (-b - d) / (2 * a);

	printf("El resultado positivo es: %.2f\n", e);
	printf("El resultado negativo es: %.2f\n", f);
}