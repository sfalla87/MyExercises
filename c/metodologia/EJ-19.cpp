# include <stdio.h>
#include <stdlib.h>//porque tenemos que incluir lirerias Porque normalmente tu necesitas declarar una funcion, llamarla y definirla.En la libreria esta la declaracion y la definicion de ls funciones que usamos
//asi que cuando ejecutamos el ejecutable el consulta las librerias, estan en el sistema operativo??Estan en varios sitios busca primero en el so
int main()
{
	int num,cont;
	for (num=1;num<=100;num++)
	{
		if(num%2!=0)
		{
			printf("%d\n",num);
			cont=cont+1;
		}
	}
	printf("Hay %d numeros impares\n",cont);
	system("PAUSE");
	return 0;
}
