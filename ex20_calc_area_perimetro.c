#define _USE_MATH_DEFINES
#include <stdio.h>
#include <math.h>

void ex20_calc_area_perimetro() {
	double hipotenusa, cateto1, cateto2, area, perimetro;

	do {
		printf("Ingresa la hipotenusa: ");
		scanf_s("%lf", &hipotenusa);
	} while (hipotenusa <= 0);

	do {
		printf("Ingresa el cateto: ");
		scanf_s("%lf", &cateto1);
	} while (cateto1 <= 0);

	cateto2 = sqrt(hipotenusa * hipotenusa - cateto1 * cateto1);
	
	area = (cateto1 * cateto2) / 2.0;

	perimetro = cateto1 + cateto2 + hipotenusa;

	printf("Cateto: %.2f\n", cateto2);
	printf("Area: %.2f\n", area);
	printf("Perimetro: %.2f\n", perimetro);


}