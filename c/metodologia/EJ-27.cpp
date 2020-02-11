#include<stdio.h>
main ()
{
	char letra='s';
		do
		{
			printf("Introduce s o n\n");
			scanf("%s",&letra);
		}
		while(letra!='s'&&letra!='S' && letra!='N' && letra!='n');
}
