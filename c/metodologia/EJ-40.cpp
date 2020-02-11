#include <stdio.h>
#include <math.h>
//
main()
{
	float interes,capital,redito,tiempo;
	
	printf("introduzca un capital: \n");
	scanf("%g",&capital);	
	printf("introduzca un redito: \n");
	scanf("%g",&redito);	
	printf("introduzca un tiempo: \n");
	scanf("%g",&tiempo);
	interes=pow(capital*(1+redito/100),tiempo);
	printf("el interes es %g:\n",interes);	
}
