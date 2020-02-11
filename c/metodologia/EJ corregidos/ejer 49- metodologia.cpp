#include <stdio.h>
#include <conio.h>

main()
{
	int num=0,cont=0,i,perf=0,divi=0;
	printf("\nIntroduzca el Numero: ");
	scanf("%d",&num);
	perf=num;
	for(i=1;i<=num;i++)
		if(num % i == 0)
			divi=divi+1;
		if(perf==divi-perf)
			printf("\n\t->%d\n",perf);
				
}
