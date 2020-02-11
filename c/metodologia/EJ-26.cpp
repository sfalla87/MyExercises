# include <stdio.h>
#include <stdlib.h>

int main()
{
int num=0,i,total=0;
float media;

for(i=1;i<=5;i++)
	{
		printf("Introduzca un numero\n");
		scanf("%d",&num);
		total=total+num;
	}
media=(float)total/5;
printf("La media es %g\n",media);
system("PAUSE");
}
