#include <stdio.h>
#include <stdlib.h>
main ()
{
	int num,cont,positivos=0,negativos=0;
	for(cont=1;cont<=100;cont++)
	{
		printf("Introduce un numero: %d\n",cont);
		scanf("%d",&num);
		if (num>=0)
		{
			positivos=positivos+1;
		}
		else
		{
			negativos=negativos+1;
		}
	}
	printf("Hay %d positivos y %d negativos\n",positivos,negativos);
	system("PAUSE");
	return 0;
}
