#include <stdio.h>
#include <stdlib.h>
main ()
{
int num,cont;
printf("introduce un numero\n");
scanf("%d",&num);
printf("\nLos numeros natruales son:\n");
for(cont=0;cont<=num;cont++)
{
	printf("%d\n",cont);
}
system("PAUSE");
}
