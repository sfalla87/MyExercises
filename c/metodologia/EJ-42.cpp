#include <stdio.h>
#include <stdlib.h>
main ()
{
	int cuadrado,suma,i;
	for(i=0;i<=100;i++)
	{
		cuadrado=i*i;
		suma=suma+cuadrado;
	}
	printf("La suma de los cuadrados es:\n%d\n",suma);
	system("PAUSE");
}
