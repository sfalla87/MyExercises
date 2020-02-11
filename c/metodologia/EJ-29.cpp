#include <stdio.h>
main()
{
	float num2, suma=0, media;
	int num1, contador;
	char salir;
	do
	{
		printf("Cuantos numeros quieres introducir?\n");
		scanf("%d", &num1);
		for(contador=1;contador<=num1;contador++)
		{
			printf("Introduce un numero(#%d)\n", contador);
			scanf("%f", &num2);
			suma=suma+num2;
		}
		media=suma/num1;
		printf("La media es: %g.\n", media);
		printf("Quieres introducir mas datos?\n");
		scanf("%s", &salir);
	}
	while(salir=='s' || salir=='S');
}
