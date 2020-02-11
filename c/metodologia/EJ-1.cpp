#include <stdio.h>
#include <stdlib.h>
main ()
{
	int cesto=10,i;
	for(i=0;i<=100;i++)
	{
		if(cesto<=1)
		{
			cesto=10;  
			printf("---------%d CESTO LLENO----------\n",cesto);
		}
		cesto=cesto-1; 
		printf("\nUna patata pelada\t Quedan %d\n",cesto);
	}		
	system("PAUSE");
	return 0;
}
