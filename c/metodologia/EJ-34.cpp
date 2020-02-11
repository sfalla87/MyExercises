# include <stdio.h>
#include <stdlib.h>
int main()
{
int num,i,num2;
printf("Introduzca un numero\n");
scanf("%d",&num2);
for(i=2;i<=5;i++)
	{
		printf("Introduzca un numero\n");
		scanf("%d",&num);
		if(num>num2) //mayor
		{
			printf("El numero que introduciste es mayor que el num de referencia\n\n");
		}
		if(num<num2) //menor
		{
			printf("El numero que introduciste es menor que el num de referencia\n\n");
		}
		if(num==num2) //igual
		{
			printf("El numero que introduciste es igual que el num de referencia\n\n");
		}
	}
system("PAUSE");
}
