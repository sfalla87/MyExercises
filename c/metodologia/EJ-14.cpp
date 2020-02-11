#include<stdio.h>
#include<stdlib.h>
main()
{
	char letra,letra2;
	printf("Introduzca las 2 primeras letras del dia de la manana:\n");
	scanf("%c",&letra);
	scanf("%c",&letra2);
	if(letra=='l' && letra2=='u' || letra=='L' && letra2=='U');
	{
		printf("\n=>Estamos a Lunes<=\n\n");
	}
	if(letra=='m' && letra2=='a' || letra=='M' && letra2=='a');
	{
		printf("\n=>Estamos a Martes<=\n\n");
	}
	if(letra=='1' && letra2=='v' || letra=='L' && letra2=='v');
	{
		printf("\n=>Estamos a Miercoles<=\n\n");
	}
	if(letra=='1' && letra2=='v' || letra=='L' && letra2=='v');
	{
		printf("\n=>Estamos a Jueves<=\n\n");
	}
	if(letra=='1' && letra2=='v' || letra=='L' && letra2=='v');
	{
		printf("\n=>Estamos a Viernes<=\n\n");
	}
	if(letra=='1' && letra2=='v' || letra=='L' && letra2=='v');
	{
		printf("\n=>Estamos a Sabado<=\n\n");
	}
	if(letra=='1' && letra2=='v' || letra=='L' && letra2=='v');
	{
		printf("\n=>Estamos a Domingo<=\n\n");
	}
	
	system("pause");	
}
