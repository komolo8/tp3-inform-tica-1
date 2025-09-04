#include <stdio.h>

int main() {
	float peso, altura, imc;
	
	do {
		printf("Ingrese el peso en kg: ");
		scanf("%f", &peso);
		if (peso <= 0) {
			printf("Error: el peso debe ser un número positivo.\n");
		}
	} while (peso <= 0);
	
	do {
		printf("Ingrese la altura en metros: ");
		scanf("%f", &altura);
		if (altura <= 0) {
			printf("Error: la altura debe ser un número positivo.\n");
		}
	} while (altura <= 0);
	
	imc = peso / (altura * altura);
	
	printf("\nSu índice de masa corporal es: %.2f\n\n", imc);
	
	printf("\nIndice         | Condición\n");
	printf("-----------------------------\n");
	printf("<18.5          | Bajo peso\n");
	printf("18.5 a 24.9    | Normal\n");
	printf("25.0 a 29.9    | Sobrepeso\n");
	printf(">=30           | Obesidad\n");
	
	if (imc < 18.5)
		printf("\nUsted está bajo en peso.\n");
	
	else if (imc >= 18.5 && imc < 25)
		printf("\nUsted está en un peso normal.\n");
	
	else if (imc >= 25 && imc < 30)
		printf("\nUsted tiene sobrepeso.\n");
	
	else
		printf("\nUsted tiene obesidad.\n");
	
	return 0;
}
