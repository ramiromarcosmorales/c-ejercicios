/*
Ejercicio 1: 
Leer dos números e imprimir su suma.
*/
#include <stdio.h>

int main()
{
	int a, b, suma;
	printf("Ingresa el primer numero: ");
	scanf_s("%d", &a);
	
	printf("Ingrese el segundo numero: ");
	scanf_s("%d", &b);

	suma = a + b;
	printf("La suma total es: %d", suma);
	
	return 0;
}

