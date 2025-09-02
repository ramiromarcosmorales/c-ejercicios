/*
Ejercicio 7:
Leer dos números decimales y mostrar su diferencia absoluta. 
Usar <math.h> para fabs().
*/


#include <stdio.h>
#include <math.h>

int main()
{
	double a, b, c;

	printf("Ingrese el primer numero: ");
	scanf_s("%lf", &a);

	printf("Ingrese el segundo numero: ");
	scanf_s("%lf", &b);

	c = fabs(a - b);

	printf("La diferencia absoluta es: %lf", c);

	return 0;
}

