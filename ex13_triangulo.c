/*
Ejercicio 13:
Leer tres lados e indicar si forman un triángulo válido.
*/
#include <stdio.h>

int main()
{
	double a, b, c;

	printf("Ingrese el primer lado: ");
	scanf_s("%lf", &a);

	printf("Ingrese el segundo lado: ");
	scanf_s("%lf", &b);

	printf("Ingrese el tercer lado: ");
	scanf_s("%lf", &c);

	if (a > 0 && b > 0 && c > 0 && (a + b) > c && (a + c) > b && (b + c) > a) {
		printf("Es un triangulo valido!");
	} 
	else {
		printf("No es un triangulo valido!");
	}

	return 0;
}