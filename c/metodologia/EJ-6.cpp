#include <stdio.h>
#include <stdlib.h>
main ()
{
	int num;
	num=0;
	printf("Introduce un numero\n");
	scanf("%d",&num);
	if(num%2!=0)
		printf("%d Es un numero impar\n",num);
	else
		printf("%d Es un numero par\n",num);
	system("PAUSE");	
	return 0;
}
