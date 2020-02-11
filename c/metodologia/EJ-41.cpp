#include <stdio.h>
#include <stdlib.h>
// el codigo es de SET PAMPLONA, el mio era similar pero daba error
main ()
{
	int num=501,cont=0,suma=0,suma2=0,i;
	while (num>=500 || num<=0)
	{
	printf("Introduzca un numero menor que 500: \n");
	scanf("%d", &num);// probaba si podia poner un salto de linea 
	}
	printf("\n");
	for(i=num;i<=500;i=i+8)
	{
		printf("%d\n",i);
		suma=suma+i;
		suma2=suma2+i*i;
		cont=cont+1;
	}
	system("pause");	
}

