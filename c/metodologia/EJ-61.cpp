#include <stdio.h>
#include <stdlib.h>
main()
{
	int primo=1,divisor=0,cont=0;
	for(primo=1;primo<=100;primo++)	
	{
		for(cont=1;cont<=primo;cont++)	
		{
			if(primo%cont==0)
				divisor=divisor+1;
		}
		if(divisor==2)
			printf("%d");
		divisor=0;
		system("PAUSE");
	}
}
