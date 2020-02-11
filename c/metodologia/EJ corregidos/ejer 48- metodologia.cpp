#include <stdio.h>

main()
{
	int num=0,i,fact=1;
	
	printf("\nNumero: ");
	scanf("%d",&num);
	
	for(i=1;i<=num;i++)
	{
		fact=fact*i;
	}
	printf("\nEl Factorial de %d es %d\n\n",num,fact);
}
