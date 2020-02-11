# include <stdio.h>
#include <stdlib.h>
int num;
int main(void)
{
	
	int suma=0;
	for (num=1;num<=100;num++)
{
	printf("%d\n",num);
	suma=suma+num;
}
printf ("la suma es %d \n",suma);
  system("PAUSE");	
  return 0;
}
