/*
Ejercicio 9:
Leer dos notas y calcular su promedio (mostrar si aprobó o no).
*/
#include <stdio.h>

int main() 
{
	double a, b, prom;

	printf("Ingrese la primer nota: ");
	scanf_s("%lf", &a);

	printf("Ingrese la segunda nota: ");
	scanf_s("%lf", &b);

	prom = (a + b) / 2;

	printf("La nota es: %lf", prom);

	return 0;
}