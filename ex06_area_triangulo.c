/*
Ejercicio 6:
Leer base y altura de un triángulo y calcular su área.
*/
#include <stdio.h>

int main()
{
	double base, altura, area;

	printf("Ingrese base: ");
	scanf_s("%lf", &base);

	printf("Ingrese altura: ");
	scanf_s("%lf", &altura);

	area = base * altura / 2;

	printf("El area es: %.2f\n", area);

	return 0;
}