//https://github.com/komolo8/tp3-inform-tica-1

#include <stdio.h>
#define TAM 5

int main(void) {
	int   cod[TAM]; 
	float pre[TAM];
	int error = 0;
	
	printf("Ingrese %d productos, se solicitara el codigo y precio:\n", TAM);
	
	for (int i = 0; i < TAM; i++) {
		error = 0;
		do {
			if (error) printf("Error. ");
			printf("Ingrese el codigo de barras (1-999999999): ");
			scanf("%d", &cod[i]);
			error = 1;
		} while (cod[i] < 1 || cod[i] > 999999999);
		
		error = 0;
		do {
			if (error) printf("Error. ");
			printf("Ingrese el precio (>= 0): ");
			scanf("%f", &pre[i]);
			error = 1;
		} while (pre[i] < 0.0f);
	}
	
	printf("\n%-12s %-10s\n", "Codigo", "Precio");
	for (int i = 0; i < TAM; i++) {
		printf("%-12d %10.2f\n", cod[i], pre[i]);
	}
	
	int Max = 0, Min = 0;
	for (int i = 1; i < TAM; i++) {
		if (pre[i] > pre[Max]) Max = i;
		if (pre[i] < pre[Min]) Min = i;
	}
	
	printf("\nMas caro   : [codigo %d] %.2f\n", cod[Max], pre[Max]);
	printf("Mas barato : [codigo %d] %.2f\n", cod[Min], pre[Min]);
	
	return 0;
}
