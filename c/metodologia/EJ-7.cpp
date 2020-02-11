#include<stdio.h>
#include<stdlib.h>
main()
{
int n1,n2,max;
printf("Introduce el primer numero: ");
scanf("%d",&n1);
max=n1;
printf("Introduce el segundo numero: ");
scanf("%d",&n2);
if(n2>max)
	max=n2;
printf("El num. maximo es: %d\n",max);
}
