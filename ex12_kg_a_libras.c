/*
Ejercicio 12:
Leer peso en kilogramos y convertir a libras.
*/
#include <stdio.h>

void ex12_kg_a_libras() {
	double kg, libras;

	printf("Ingrese los kilos: ");
	scanf_s("%lf", &kg);

	libras = kg * 2.205;

	printf("Libras: %.3lf\n", libras);
}