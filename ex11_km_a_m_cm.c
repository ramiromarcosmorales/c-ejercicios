/*
Ejercicio 11:
Leer cantidad en kil�metros y convertir a metros y cent�metros
*/
#include <stdio.h>

int main()
{
	double km, metros, cm;

	printf("Ingrese los kilometros: ");
	scanf_s("%lf", &km);

	metros = km * 1000;
	cm = km * 100000;

	printf("Metros: %.2lf\n", metros);
	printf("Centimetros: %.2lf\n", cm);

	return 0;
}