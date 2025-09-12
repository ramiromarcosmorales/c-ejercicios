/*
Ejercicio 11:
Leer cantidad en kilómetros y convertir a metros y centímetros
*/
#include <stdio.h>

void ex11_km_a_m_cm() {
	double km, metros, cm;

	printf("Ingrese los kilometros: ");
	scanf_s("%lf", &km);

	metros = km * 1000;
	cm = km * 100000;

	printf("Metros: %.2lf\n", metros);
	printf("Centimetros: %.2lf\n", cm);
}