#include <stdio.h>
#include <stdlib.h>
main ()
{
	int num,suma=0,cont=0,i;
	printf("Introduce un numero\n");
	scanf("%d",&num);
	printf("\n");
	for(i=0;i<=num;i=i+2)
	{
		printf("%d\n",i);
		suma=suma+i;
		cont=cont+1;
	}
	printf("Suma: %d\nHay %d num pares\n",suma,cont);
	system("PAUSE");
}
