#include <stdio.h>
#include <stdlib.h>
#define PI 3.1416
main ()
{
	float radio,longitud,area;
	printf("Introduce el radio de una circunferencia \n");
	scanf("%f",&radio);
// no me acuerdo como se calculaba
	longitud=2*PI*radio;
	printf("La longitud es: %g\n",longitud);
	area=PI*(radio*radio);
	printf("El area del circulo es: %g\n",area); //g para quitar los ceros de detras, para poner las constantes  usa la directriz define
  system("PAUSE");	
  return 0;
}
