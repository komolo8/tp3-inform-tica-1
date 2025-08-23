#include <stdio.h>
#include <math.h>
#define PI 3.1415

float calcularAreaRectangulo (float altura,float longitud);
float calcularPerimetroRectangulo (float altura,float longitud);
float calcularDiagonalRectangulo (float altura,float longitud);
float calcularAreaCirculo (float radio);
float calcularPerimetroCirculo (float radio);
void imprimirResultados (float area,float perimetro);
int seleccion=0; 
float altura=0;
float longitud=0;
float radio=0;

int main(int argc, char *argv[]) {
	printf("que desea calcular: rectangulo (escriba 1) o circulo (escriba 2)\n");
	scanf("%d", &seleccion);
	while(seleccion!=1 && seleccion!=2){
		printf("ERROR. que desea calcular: rectangulo (escriba 1) o circulo (escriba 2)\n");
		scanf("%d", &seleccion);
	}
	if(seleccion==1){
		printf("selecciono rectangulo\n");
		printf("introdusca la altura\n");
		scanf("%f", &altura);
		while(altura<0){
			printf("la altura debe ser mayor a 0\n");
			printf("introducir nuevamente\n");
			scanf("%f", &altura);	
		}
		printf("introdusca la longitud\n");
		scanf("%f", &longitud);
		while(longitud<0){
			printf("la altura debe ser mayor a 0\n");
			printf("introducir nuevamente\n");
			scanf("%f", &longitud);	
		}
		imprimirResultados(calcularAreaRectangulo(altura,longitud),calcularPerimetroRectangulo (altura,longitud));
	}
	if(seleccion==2){
		printf("selecciono circulo\n");
		printf("introdusca el radio\n");
		scanf("%f", &radio);
		while(radio<0){
			printf("el radio debe ser mayor a 0\n");
			printf("introducir nuevamente\n");
			scanf("%f", &radio);	
		}
		imprimirResultados(calcularAreaCirculo(radio),calcularPerimetroCirculo(radio));
	}
	return 0;
}
float calcularAreaRectangulo (float altura,float longitud){
	float area = altura * longitud;
	return(area);
}
float calcularPerimetroRectangulo (float altura,float longitud){
	float perimetro = 2*altura + 2*longitud;
	return(perimetro);
}
float calcularDiagonalRectangulo (float altura,float longitud){
	float diagonal = sqrt((double)altura * altura + (double)longitud * longitud);
	return(diagonal);
}
float calcularAreaCirculo (float radio){
	float area = PI * radio * radio;
	return(area);
}
float calcularPerimetroCirculo (float radio){
	float perimetro = 2 * PI * radio;
	return(perimetro);
}
void imprimirResultados (float area,float perimetro){
	if(seleccion==1){
		printf("el area del rectangulo es %f\n",area);
		printf("el perimetro del rectangulo es %f\n",perimetro);
	}
	if(seleccion==2){
		printf("el area del circulo es %f\n",area);
		printf("el perimetro del circulo es %f\n",perimetro);
	}
}
