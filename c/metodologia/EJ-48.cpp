# include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int num,i,factorial=1;
	printf("Introduzca un numero: \n"); //supongamos que introduciremos un num positivo
	scanf("%d",&num);
	if(num<=0)
		printf("Debes introducir un num positivo y mayor que 0\n");
	else
	{
		for(i=1;i<=num;i++)
		{
			factorial=factorial*i;
		}
		printf("La factorial del numero es: %d \n",factorial);
	}
	system("PAUSE");	
}
