# include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int i,cont=0;
	for(i=3;i<=99;i=i+3)
	{
		printf("%d\n",i);
		cont=cont+1;
	}
	printf("Hay %d num. multiplos de 3\n",cont);
	system("PAUSE");
}
