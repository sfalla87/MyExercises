#include <stdio.h>
#include <stdlib.h>
main()
{
	float num2, suma=0, media;
	int num1, contador;
	printf("Cuantos numeros quieres introducir?\n");
	scanf("%d", &num1);
	for(contador=1;contador<=num1;contador++)
	{
		printf("Introduce un numero(#%d)\n", contador);
		scanf("%g", &num2);
		suma=suma+num2;
	}
	media=suma/5;
	printf("La media es: %g.\n", media);
	system("PAUSE");
}
