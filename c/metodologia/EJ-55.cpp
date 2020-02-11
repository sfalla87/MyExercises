# include <stdio.h>
#include <stdlib.h>
int main()
{
//JUEGO DE MARIEBAND
int cerillas;
	printf("Quedan  cerillas")
	prinft("Introduzca el numero de cerillas (1 a 4)");
printf("Introduzca un numero\n");
scanf("%d",&num);
mayor=num;
menor=num;
for(i=2;i<=5;i++)
	{
		printf("Introduzca un numero\n");
		scanf("%d",&num);
		if(num>mayor)
			mayor=num;
		if(num<menor)
			menor=num;
	}
printf("Mayor: %d\nMenor: %d\n",mayor,menor);
system("PAUSE");
}