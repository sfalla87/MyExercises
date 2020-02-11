#include <stdio.h>
#include <stdlib.h>
int a=1,b=1,c,num;
int main()
{
	printf("¿Hasta que posicion quieres obtener la sucession de Fibonacci?\n");
	scanf("%d",&num);
	printf("\n");
	if(num==1)
		printf(" %d\n",a);
	else
 		if(num==2){
			printf("%d\n",a);
			printf("%d\n",b);}
		else
		{
			c=2;
			printf("%d\n",a);
			printf("%d\n",b);
		while(c<num)
		{
			a=a+b;
			printf("%d\n",a);
			c++;
			if(c==num)
				break;
			else{
				b=b+a;
				printf("%d\n",b);
				c++;}
		 }
	}
   system("PAUSE");
}
