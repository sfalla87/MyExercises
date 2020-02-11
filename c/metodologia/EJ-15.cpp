#include <stdio.h>
#include <stdlib.h>
main()
{
	int anyo;
	printf("Introduzca un anyo\n");
	scanf("%d",&anyo);
	
	if(anyo%4==0 || anyo%100==0 && anyo%400==0)
			printf("Es bisiesto\n");
	else
			printf("No es bisiesto\n");
	system("PAUSE");
	return 0;
}
