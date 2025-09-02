/*
Ejercicio 2:
Leer tres números y calcular su promedio
*/
#include <stdio.h>

int main()
{
	float a, b, c, promedio;

	printf("Ingrese el primer numero: ");
	scanf_s("%f", &a);

	printf("Ingrese el segundo numero: ");
	scanf_s("%f", &b);

	printf("Ingrese el tercer numero: ");
	scanf_s("%f", &c);

	promedio = (a + b + c) / 3;

	printf("El promedio es: %.2f", promedio);

	return 0;
}