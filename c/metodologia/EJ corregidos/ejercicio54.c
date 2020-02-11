#include <stdio.h>
#include <stdlib.h>
main ()
{
	int monedas;
	system("cls");
	do
	{
		printf("Introduzca la cantidad de dinero: ");
		scanf("%d", &monedas);
	}
	while (monedas<0);
	printf("\tMonedas de 100:\t%d\n", monedas/100);
	monedas=monedas%100;
	printf("\tMonedas de 50:\t%d\n", monedas/50);
	monedas=monedas%50;
	printf("\tMonedas de 25:\t%d\n", monedas/25);
	monedas=monedas%25;
	printf("\tMonedas de 5:\t%d\n", monedas/5);
	monedas=monedas%5;
	printf("\tMonedas de 1:\t%d\n", monedas);
	system("pause");
}

