#include <stdio.h>
#include <stdlib.h>
main ()
{
int A,B,C;
	while (A<0);
	{
		printf("Escribe el valor A: ");
		scanf("%d",&A);
	}
	while (B<0 && A>B);
	{
		printf ("Escribe el valor B: ");
		scanf("%d",&B);
	}
	while (C <0 && C>B);
	{
		printf("Escribe el valor C: ");
		scanf("%d",&C);
	}
	if (A>=B+C)
	{
 		printf("No forman triangulo\n");
	}
	else if (A*A==B*B+C*C)
	{
		printf("Forman rectangulo\n");
	}
	else if (A*A>B*B+C*C)
	{
		printf("Forman obstangulo\n");
	}
	else if (A*A<B*B+C*C)
	{
		printf("Forman acutangulo\n");
	}
	
	system("PAUSE");
	return 0;
}
