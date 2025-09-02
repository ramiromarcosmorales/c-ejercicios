/*
Ejercicio 3:
Leer el radio de una circunferencia y calcular su �rea y per�metro.
*/
#include <stdio.h>

int main()
{
	const double PI = 3.14;
	double radio, area, perimetro;
	
	printf("Ingrese radio de circunferencia: ");
	scanf_s("%lf", &radio);

	area = PI * radio * radio;
	perimetro = 2 * PI * radio;

	printf("El area es: %.2f y el perimetro es: %.2f\n", area, perimetro);

	return 0;
}
