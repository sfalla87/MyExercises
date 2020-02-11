# include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int num,cont,mayor=0,menor=0;
	for (cont=0;cont<5;cont++)
	{
		printf("Introduzca un numero\n");
		scanf("%d",&num);
		if(num>5)
		{
			mayor=mayor+1;
		}
		else
		{
			menor=menor+1;	
		}
	}
	printf("Hay %d numeros mayores que 5\n%d numeros menores que 5\n",mayor,menor);
	system("PAUSE");
	return 0;
}
