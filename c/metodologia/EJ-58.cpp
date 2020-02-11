#include <stdio.h>
#include <stdlib.h>
#include <math.h>
float res1,res2,w,a,b,c,solucion;
int main()
{
	system("color f3");
	printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",201,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,187);
	printf("%c                 SOLUCIONADOR DE ECUACIONES DE SEGUNDO GRADO                  %c",186,186);
	printf("%c                 ---------Guillermo Ferrer Nicol%cs----------                  %c",186,160,186);
	printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",200,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,188);
	
	printf("Introduzca la ecuacion de segundo grado de la forma:\n\t\t\tax%c+bx+c=0\n\n",253);
	printf("introduzca el numero 'a':  ");
	scanf("%g",&a);
	printf("introduzca el numero 'b':  ");
	scanf("%g",&b);
	printf("introduzca el numero 'c':  ");
	scanf("%g",&c);
	//printf("%g^2+%gx+%g=0\n",a,b,c);
	if(a==0)
	{
		solucion=-c/b;
		printf("la solucion es -c/b=%g\n",solucion);
	}
	else
	{
		if (b*b-4*a*c>=0)  //comproba si tiene solucion real la ecuacion--> si es negativa no tiene solucion
		{
			// comienza la formula
			w=b*b-4*a*c;
			res1=(b+sqrt(w))/(2*a);
			res2=(b-sqrt(w))/(2*a);
			//--------------------
			printf("\n******************Los resultados son:*****************\n+:%g\n-:%g\n",res1,res2);
		}
		else
		{
			printf("No tiene solucion real\n");
		}
	}
  system("PAUSE");	
  return 0;
}
