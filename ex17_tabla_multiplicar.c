#include <stdio.h>

void ex17_tabla_multiplicar() {
	int num;
	printf("Ingrese un numero: ");
	scanf_s("%d", &num);

	printf("\nTABLA DE MULTIPLICAR (1 AL 10)\n");
	printf("-------------------------------\n");

	for (int i = 1; i <= 10; i++)
	{
		printf("%d x %d = %d\n", num, i, num * i);
	}

}