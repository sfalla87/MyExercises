#include <stdio.h>
#include <stdlib.h>
main ()
{
	int num;
	num=0;
	printf("Introduce un numero\n");
	scanf("%d",&num);
	if(num<0)
		printf("%d Es un numero negativo\n",num);
	else if (num>0)
		printf("%d Es un numero positivo\n",num);
	else if(num==0)
		printf("%d Es un numero nulo\n",num);
	system("PAUSE");
	return 0;
}
