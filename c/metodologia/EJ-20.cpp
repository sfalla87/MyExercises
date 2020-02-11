#include <stdio.h>
#include <stdlib.h>
main ()
{
	int cont,pares=0,impares=0;
	for(cont=0;cont<=1000;cont++)
	{
		if (cont%2==0)
			pares=cont+pares;
		else
			impares=cont+impares;
	}
	printf("Hay %d pares y %d impares\n",pares,impares);
	system("PAUSE");
	return 0;
}
