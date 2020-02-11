#include <stdio.h>
#include <stdlib.h>
main ()
{
	int suma2=0,suma3=0,i;

	printf("Multiplos de 2\t||\tMultiplos de 3  || M. de 3 y 2\n");
	for(i=1;i<=100;i++)
	{
		if(i%2==0 && i%3==0)
		{
			suma2=suma2+i;
			printf("%d\t       \t||\t",i);
			
		}
		if(i%3==0)
		{
			suma3=suma3+i;
			printf("%d\n",i);
		}
	}
	printf("\nLa suma de los multiplos de 2 es: %d\nLa suma de los multiplos de 3 es: %d\n",suma2,suma3);

 	system("PAUSE");
}
