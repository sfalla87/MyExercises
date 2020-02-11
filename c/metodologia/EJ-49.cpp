# include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int num,i,suma=0;
	printf("Introduzca un numero\n");
	scanf("%d",&num);
	//buscamos divisores
	for(i=0;i<=num;i++)
	{
		if(num%i==0)
		{
			suma=suma+i;
		}
	}
	suma=suma-num;
	if(num==suma)
	{
		printf("Es un num perfecto");
	}
	else
	{
		printf("No es un num perfecto");
	}
	
	suma=0;
	system("PAUSE");
}
