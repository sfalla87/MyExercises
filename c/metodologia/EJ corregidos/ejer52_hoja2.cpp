#include <stdio.h>
main()
{
	int numero1,numero2,contador,suma=0;
	
	printf("introduzca numero 1 ");
	scanf("%d",&numero1);
	printf("introduzca numero 2 ");
	scanf("%d",&numero2);
	
	for(contador=1;contador<=numero2;contador++)
		{
			suma=suma+numero1;		
		}
	printf("el resultado de la suma es: %d",suma);
	getchar();
}
