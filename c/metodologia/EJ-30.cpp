#include <stdio.h>
#include <stdlib.h>
main()
{
	float num1, suma=0, media=0; 
	int vuelta=1;
	printf("Introduce los numeros que quieras\n");
	printf("para finalizar introduce un numero negativo\n");
	do
	{
		printf("Introduce un numero(#%d)\n", vuelta);
		scanf("%f", &num1);
		if(num1>=0)
		{
			suma=suma+num1;
			vuelta++;
		}
	}
	while(num1>=0);
	media=suma/vuelta;
	printf("La media es:%g\n", media);
	system("PAUSE");
}
