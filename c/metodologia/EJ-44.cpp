#include<stdio.h>
#include<stdlib.h>
main()
{
float num=-1;
int r=1,cont=0;
do
{
printf("Introduce un numero: ");
scanf("%d",&num);
}while(num<0);

do
{
r=num/10;
cont=cont+1;
}while(r>0);
printf("%d",cont);
}
