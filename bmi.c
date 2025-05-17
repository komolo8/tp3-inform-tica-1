#include <stdio.h>

int main() {
	float peso, altura, imc;
	
	printf("Ingrese el peso en kg: ");
	scanf("%f", &peso);
	
	printf("Ingrese la altura en metros: ");
	scanf("%f", &altura);
	
	imc = peso / (altura * altura);
	
	printf("\nSu índice de masa corporal es: %.2f\n\n", imc);
	
    printf("\nIndice         | Condicion\n");
    printf("-----------------------------\n");
    printf("<18.5          | Bajo peso\n");
    printf("18.5 a 24.9    | Normal\n");
    printf("25.0 a 29.9    | Sobrepeso\n");
    printf(">=30           | Obesidad\n");

	if(imc<18.5)
		printf("usted esta bajo en peso");
	
	if(imc>=18.5 && imc<25)
		printf("usted esta normal");
	
	if(imc>=25 && imc<30)
		printf("usted esta con sobre peso");
	
	if(imc>=30)
		printf("usted esta con obesidad");
	
	return 0;
}
