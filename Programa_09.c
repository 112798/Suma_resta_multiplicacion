#include <stdio.h>

int main(){
	int a = 5, b = 4, c = -1; 
	
	int suma_enteros = a + b + c;
	int resta_enteros = a - b - c;
	int producto_enteros = a * b * c;
	
	printf("Suma enteros %d\n", suma_enteros);
	printf("Resta enteros %d\n", resta_enteros);
	printf("Producto enteros %d\n", producto_enteros); 	
	
	printf("-------------------------------------\n");
	
	float n1 = 5.5, n2 = 9.1, n3 = -6.7;
	
	float suma_flotantes = n1 + n2 + n3;
	float resta_flotantes = n1 - n2- n3;
	float producto_flotantes = n1 * n2 * n3;
	
	printf("Suma flotantes: %.2f\n", suma_flotantes);
	printf("Resta flotantes: %.2f\n", resta_flotantes);
	printf("Producto flotantes: %.2f\n", producto_flotantes); 	
	
	printf("-------------------------------------\n");
	
	int mix_int = a + n1;
	float mix_float = a + n1;
	printf("El valor de a es: %d\n",a);
	printf("El valor de n1 es: %.2f\n",n1);
	
	printf("Suma guardada en variable entera: %d\n",mix_int);
	printf("Suma guardada en variable float: %.2f\n",mix_float);
	}
