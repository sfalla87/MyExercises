# include <stdio.h>
#include <stdlib.h>
int system(void);
int main()
{
	int num,i,num2,numM,numm,cont=0,sumapar=0,sumaimpar=0;
	for(i=0;i<=100;i--) //bucle infinito, cuando pase la siguiente condicion, rompera el bucle
	{
		printf("Escribe un numero\n");
		scanf("%d",&num);
		printf("Escribe un numero\n");
		scanf("%d",&num2);
		if(num==num2)
		{
			printf("los numeros son iguales");
		}
		else
		{
				break;
		}
	}
	if(num>num2)
	{
		numm=num2; //numero menor
		numM=num;  //numero mayor
	}
	if(num<num2)
	{
		numM=num2; //numero mayor
		numm=num;  //numero menor
	}
	for(i=numm;i<=numM;i++)
	{
		printf("\t %d \n",i);
		cont=cont+1;
		if(i%2==0)
		{
			sumapar=sumapar+i;			
		}
		else
		{
			sumaimpar=sumaimpar+i;				
		}
	}
	printf("Hay %d numeros.\nLa suma de los num. pares es: %d\nLa suma de los num. impares es: %d\n",cont,sumapar,sumaimpar);
	system("PAUSE");	
}
