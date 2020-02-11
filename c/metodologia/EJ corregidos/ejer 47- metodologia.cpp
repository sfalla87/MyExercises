#include <stdio.h>

main()
{
	int num1=0,num2=0,menor=0,mayor=0;
	do
	{
		printf("\nIntroduce Num 1: ");
		scanf("%d",&num1);
		printf("\nIntroduce Num 2: ");
		scanf("%d",&num2);
	}while(num1>50 && num2>50);
	
	while(num1 != num2) // comprobamos que los numeros no sean iguales
	{
		do
		{
			if(num1<num2)
			{
				menor=num1;
				mayor=num2;
				num1=num1+5;
				num2=num2-2;
			}else{
				menor=num2;
				mayor=num1;
				num2=num2+5;
				num1=num1-2;
			}
		}while(menor>mayor);
	}
	printf("\nAl Principio el Num1 era %d y el Num2 era %d\n",num1,num2);
	printf("\nAhora el Num1 es %d y el Num2 es %d\n",num1,num2);
	
}
