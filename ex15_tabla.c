#define _USE_MATH_DEFINES
#include <stdio.h>
#include <math.h>

void ex15_tabla() {
	printf("x sen(x) cos(x) tan(x) \n");
	printf("-----------------------\n");

	for (double i = 0.0; i <= M_PI; i += 0.1) {
		printf("%lf %lf %lf %lf\n", i, sin(i), cos(i), tan(i));
	}
}