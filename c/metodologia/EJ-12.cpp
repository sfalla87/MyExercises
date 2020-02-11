#include<stdio.h>
#include<stdlib.h>
main()
{
	int nota;
	printf("Introduce una nota: ");
	scanf("%d",&nota);
	do
	{
		if(nota>=0 && nota<3)
			printf("Muy Deficiente\n");
		if(nota>=3 && nota<5)
			printf("Insuficiente\n");
		if(nota>=5 && nota<6)
			printf("Suficiente\n");	
		if(nota>=6 && nota<7)
			printf("Bien\n");	
		if(nota>=8 && nota<9)
			printf("Notable\n");	
		if(nota>=9 && nota<10)
			printf("Sobresaliente\n");
		if(nota>10 || nota<0)
			printf("La nota no puede ser menor que 0 y mayor que 10\n");
	}
	while(nota<=0 && nota>=10);
	
	system("PAUSE");
}
