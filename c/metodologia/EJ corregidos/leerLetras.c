#include <stdio.h>
#include <stdlib.h>

main ()
{
	int c[256], letra, i;
	for (i=0;i<=255;i++)
		c[i]=0;
	printf("Introduzca una frase:\n");
	while ((letra=getchar())!='\n')
		c[letra]++;
	for (i=32;i<=126;i++)
		printf("\t%c -->%5d\n", i, c[i]);
	system("pause");
}
		
