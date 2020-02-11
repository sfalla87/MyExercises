#include <stdio.h>

main()
{
	int i,num=0,suma=0,cont=0;
	do
	{
		printf("\nEscribir un Numero: ");
		scanf("%d",&num);
	}while(num < 0);
	for(i=0;i<=num;i++)
	{
		if(i % 2 == 0)
		{
			printf("\n\t->%d\n",i);
			cont=cont+1;
			suma=suma+i;
		}
	}
	printf("\nEl Total de Multiplos es: %d y la Suma de los Mismos: %d\n\n",cont,suma);
}
