#include <stdio.h>
#include <stdlib.h>
main ()
{
	int i,num,num2,mayor,menor;
	printf("Introduce un numero\n");
	scanf("%d",&num);
	printf("Introduce un numero\n");
	scanf("%d",&num2);
	if(num>num2)
	{
	menor=num2;
	mayor=num;
	}
	else
	{
	menor=num;
	mayor=num2;	
	}
//	printf("mayor %d, menor %d\n",mayor,menor); //lo he puesto ahi para que compruebe si coge bien los numeros y decir si es mayor o menor.
	for(i=menor;i<=mayor;i=i+2)
	{
	mayor=mayor+5;
	menor=menor+2;
	printf("%d\t||\t%d",mayor,menor);
	}	
	system("PAUSE");	
}
