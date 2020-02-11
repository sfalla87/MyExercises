# include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int max,num,nulo=0,i,suma;
	printf("Introduce un numero: ");
	scanf("%d",&num);
	max=num;
	suma=num;
	for(i=2;i<=100;i++)
	{
		printf("Introduce un numero: ");
		scanf("%d",&num);
		suma=suma+num;
		if(num>max)
			max=num;
		if(num<0)
		{
			printf("Has escrito un numero negativo\n");
		}
		if(num==0)
			i=100;
	}
	while(i<=100 && num==0);
	printf("\nLa suma es: %d\n",suma);
	printf("El maximo es: %d",max);
	printf("\n");
	system("PAUSE");
}
