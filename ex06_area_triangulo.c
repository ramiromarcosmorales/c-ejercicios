/*
Ejercicio 6:
Leer base y altura de un tri�ngulo y calcular su �rea.
*/
#include <stdio.h>

void ex06_area_triangulo() {
	double base, altura, area;

	printf("Ingrese base: ");
	scanf_s("%lf", &base);

	printf("Ingrese altura: ");
	scanf_s("%lf", &altura);

	area = base * altura / 2;

	printf("El area es: %.2f\n", area);
}