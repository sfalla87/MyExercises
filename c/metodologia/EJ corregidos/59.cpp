#include <stdio.h>
#include <stdlib.h>

main()
	{
		int vueltas=0,precision;
	 	float n=0,m=0,cuenta=0,result,sum1,sum=0,a=1,b=2;
	 	printf("escribe la precision que quieres: \n");
	 	scanf("%d",&precision);
	 	do
	 		{
	 			a=(a/10);
	 			vueltas ++ ;
	 		}
 		while (vueltas !=precision);
 		do 
 		{
			result=1;
			if (n==0)
				{
					result=1;
				}
			else
				{
					for (cuenta=1;cuenta>=n;cuenta ++)
						{
							result =result*cuenta;
						}
				}
				m=1/result;
				sum1=sum;
				sum=sum+m;
				n++;
				b=sum-sum1;
				printf("\n %g \n",b);
 		}
		while (b>a);
		printf("%.10f\n",sum);
		
		
		system("pause");
	}
	
