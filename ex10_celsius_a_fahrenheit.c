/*
Ejercicio 10:
Leer temperatura en Celsius y convertir a Fahrenheit.
*/
#include <stdio.h>

void ex10_celsius_a_fahrenheit() {
	double celsius, fahrenheit;

	printf("Ingrese la temperatura en Celsius: ");
	scanf_s("%lf", &celsius);

	fahrenheit = (celsius * 9 / 5) + 32;

	printf("La temperatura en fahrenheit es: %lf", fahrenheit);
}