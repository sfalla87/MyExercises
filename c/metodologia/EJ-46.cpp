#include <stdio.h>
#include <stdlib.h>
main ()
{
	int num,num2,suma=0,cont=0,i;
	printf("Introduce un numero\n");
	scanf("%d",&num);
	printf("Introduce el numero 2\n");
	scanf("%d",&num2);
	printf("\n");
	for(i=num;i<=num2;i++)
	{
		if(i%3==0)
		{
			printf("%d\n",i);	
		}
	}
	system("PAUSE");
}
