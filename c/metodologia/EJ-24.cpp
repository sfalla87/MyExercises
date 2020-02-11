#include <stdio.h>
main ()
{
	int num,nulos=0,cont,positivos=0,negativos=0;
	for(cont=1;cont<=100;cont++)
	{
		printf("Introduce un numero: %d\n",cont);
		scanf("%d",&num);
		if (num>0)
		{
			positivos=positivos+1;
		}
		if(num<0)
		{
			negativos=negativos+1;
		}
		if(num=0)
		{
			nulos=nulos+1;
		}
	}
	printf("Hay %d positivos y %d negativos y %d nulos\n",positivos,negativos,nulos);
}

