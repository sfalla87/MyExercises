//ANGEL LOPEZ ESTRADA
//UNIVERSIDAD DEL PEDREGAL
//la serie de fibonacci


#include <stdio.h>
#include <conio.h>

void  main ()
{
      long long int fibo1, fibo2, i;
//	clrscr();
	fibo1 = 1;
	fibo2 = 1;
	printf (" %lli ", fibo1);
	for (i = 0; i < 20; i++)
	{
		printf (" %lli ", fibo2);
		fibo2 = fibo2 + fibo1;
		fibo1 = fibo2 - fibo1;
	}
	getch();
}
