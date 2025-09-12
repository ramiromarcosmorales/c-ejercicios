#define _USE_MATH_DEFINES
#include <stdio.h>
#include <math.h>

void ex16_tabla_arco() {
	printf("x asin(x) acos(x) atan(x) \n");
	printf("-----------------------\n");
	for (double i = -1.0; i <= 1.0; i+=0.1) {
		printf("%.2f %.2f %.2f %.2f\n", i, asin(i), acos(i), atan(i));
	}
}