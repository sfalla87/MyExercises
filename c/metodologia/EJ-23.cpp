#include <stdio.h>
#include<stdlib.h>
main ()
{
	int cont,producto=1,suma=0;
	for(cont=10;cont<=30;cont++)
	{
		if (cont%2==0)
		{
			suma=suma+cont;
			producto=producto*cont;
		}
	}
	printf("La suma es %d y el producto %d\n",suma,producto);
	system("PAUSE");
}
