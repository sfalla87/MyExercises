#include <stdio.h>
#include <stdlib.h>
// el codigo es de SET PAMPLONA, el mio era similar pero daba error
main ()
{
	int num, i;
	system("cls");
	do
	{
		printf("Introduzca un numero positivo: ");
		scanf("%d", &num);
	}
	while (num<=0);
	printf("Los divisores de %d son\n", num);
	for (i=1; i<=num; i++)
	{
		if (num%i==0)
			printf("\t%d\n", i);
	}
	system("pause");	
}

