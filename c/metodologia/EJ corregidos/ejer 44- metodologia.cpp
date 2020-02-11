#include <stdio.h>
#include <math.h>

main()
{
	int num=0,cifras=0;
	do
	{
		printf("\nIntroduzca el Numero Positivo: ");
		scanf("%d",&num);
		
	}while(num<0);
	
	 do{
	 	
		cifras++;
	}while ( num > pow(10,cifras));
	printf("\nEl Numero de Cifras del Numero %d es: %d\n\n",num,cifras);
}
