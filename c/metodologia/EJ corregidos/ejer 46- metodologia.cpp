#include <stdio.h>

main()
{
	
	int num1=0,num2=0,i;
	do
	{
		printf("\nNUM 1: ");
		scanf("%d",&num1);
		printf("\nNUM 2: ");
		scanf("%d",&num2);
	}while(num1 < num2);
	
	for(i=num1;i<=num2;i++)
	{
		if(i % 3 == 0)
		{
			printf("\n\t->%d\n",i);
		
		}else{
			printf("\nNo Hay Multiplos\n");
		}
	}
	
	
}
