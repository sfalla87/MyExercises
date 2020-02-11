#include <stdio.h>
#include <stdlib.h>

int main () {
	int num1, num2, num3, aux1, aux2, orden_alterado;
	orden_alterado = 0;
	
	printf ("Introduzca el primer numero: ");
	scanf ("%d", &num1);
	printf ("Introduzca el segundo numero: ");
	scanf ("%d", &num2);
	if (num2 > num1) {
		aux1 = num1;
		num1 = num2;
		num2 = aux1;
		orden_alterado = 1;
	}
	printf ("Introduzca el tercer numero: ");
	scanf ("%d", &num3);
	
	if (num3 > num1) {
		aux1 = num1;
		aux2 = num2;
		num1 = num3;
		num2 = aux1;
		num3 = aux2;
		orden_alterado = 1;
	} else if (num3 > num2) {
		aux1 = num2;
		num2 = num3;
		num3 = aux1;
		orden_alterado = 1;
	}
	printf ("%d %d %d", num1, num2, num3);
	if (orden_alterado == 1) {
		printf ("\nLos numeros no se han introducido en este orden.\n");
	}
//	getch();
}
