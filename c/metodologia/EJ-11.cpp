#include <stdio.h>
#include <stdlib.h>
main ()
{
int num,res;
	printf("Introduce una cantidad\n");
	scanf("%d",&num);
	if(num<500)
	{
		res=num+(num*50)/100;
		printf("%d+(%d*50)/100=%d\n))",num,num,res);
	}
	if(num>=500 && num<1000)
	{
		res=num+(num*7)/100;
		printf("%d+(%d*7)/100=%d\n",num,num,res);
	}
	if(num>=1000 && num<=5000)
	{
		res=num+(num*15)/100;
		printf("%d+(%d*15)/100=%d\n",num,num,res);
	}
	if(num>5000)
	{
		res=num-(num*5)/100;
		printf("%d-(%d*5)/100=%d\n",num,num,res);
	}
	system("PAUSE");
	return 0;
}
