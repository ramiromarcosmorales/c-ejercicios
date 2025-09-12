#include <stdio.h>
#include <stdbool.h>

void ex01_suma();
void ex02_promedio_tres();
void ex03_circunferencia();
void ex04_par_impar();
void ex05_max_de_dos();
void ex06_area_triangulo();
void ex07_diferencia_absoluta();
void ex08_max_de_tres();
void ex09_calc_promedio();
void ex10_celsius_a_fahrenheit();
void ex11_km_a_m_cm();
void ex12_kg_a_libras();
void ex13_triangulo();
void ex14_signo();
void ex15_tabla();
void ex16_tabla_arco();
void ex17_tabla_multiplicar();

int main() {
	int opcion;
	printf("Menu de Ejercicios\n");
	printf("1 - Suma\n");
	printf("2 - Promedio de tres\n");
	printf("3 - Calcular area y perimetro\n");
	printf("4 - Par o Impar\n");
	printf("5 - Mayor de dos\n");
	printf("6 - Calcular area de triangulo\n");
	printf("7 - Diferencia Absoluta\n");
	printf("8 - Mayor de tres\n");
	printf("9 - Calcular promedio\n");
	printf("10 - Celsius a Fahrenheit\n");
	printf("11 - Km a M y CM\n");
	printf("12 - KG a Libras\n");
	printf("13 - Triangulo valido\n");
	printf("14 - Determinar signo\n");
	printf("15 - Tabla\n");
	printf("16 - Tabla arco\n");
	printf("17 - Tabla de multiplicar\n");
	printf("18 - Salir\n");

	bool salir = false;

	while (!salir) {
		printf("Ingrese una opcion: ");
		scanf_s("%d", &opcion);
		switch (opcion) {
			case 1:
				ex01_suma();
				break;
			case 2:
				ex02_promedio_tres();
				break;
			case 3:
				ex03_circunferencia();
				break;
			case 4:
				ex04_par_impar();
				break;
			case 5:
				ex05_max_de_dos();
				break;
			case 6:
				ex06_area_triangulo;
				break;
			case 7:
				ex07_diferencia_absoluta;
				break;
			case 8:
				ex08_max_de_tres;
				break;
			case 9:
				ex09_calc_promedio;
				break;
			case 10:
				ex10_celsius_a_fahrenheit;
				break;
			case 11:
				ex11_km_a_m_cm;
				break;
			case 12:
				ex12_kg_a_libras;
				break;
			case 13:
				ex13_triangulo;
				break;
			case 14:
				ex14_signo;
				break;
			case 15: 
				ex15_tabla();
				break;
			case 16:
				ex16_tabla_arco();
				break;
			case 17:
				ex17_tabla_multiplicar();
				break;
			case 18:
				printf("Gracias por utilizar el programa!");
				salir = true;
				break;
			default:
				printf("Opcion incorrecta");
				break;
		}
		printf("\n");
	}

	return 0;
}