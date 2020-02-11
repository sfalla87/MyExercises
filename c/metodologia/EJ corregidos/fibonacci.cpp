#include<stdio.h>
#include<conio.h>
void main()
{
//clrscr();
int n,a=0,b=1,c=1;
   printf("Hasta que posicion deseas ver?  ");
   scanf("%d",&n);
if(n==1)
	printf(" %d ",a);
else
	 if(n==2){
		printf(" %d ",a);
		printf(" %d ",b);}
	else
	{
		c=2;
		printf(" %d ",a);
		printf(" %d ",b);
	while(c<n)
		{
			a=a+b;
			printf(" %d ",a);
			c++;
			if(c==n)
				break;
			else{
				b=b+a;
				printf(" %d ",b);
				c++;}
		 }
	}
 getch();
}
