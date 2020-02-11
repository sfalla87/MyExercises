#include "stdio.h"
# include "stdlib.h"
void main(void)
{
	float sueldo=0,SMayor=0,SMenor=0;
	char nombre[30],mayor[30]="desconocido",menor[30]="desconocido";
	int n=1,contador=1;
	bool verdad=true;

	
	

	
	
	//pedimos cinco nombres y cinco sueldos  diciendo cual sera el mayor y cual el menor
	while (verdad)
		{
			printf("Nombre: (\"teclea SALIR para finalizar\") %d- ",n);
			gets (nombre);
			
			
			if ((nombre[0]=='S' && nombre[1]=='A' && nombre[2]=='L' && nombre[3]=='I' 
				&& nombre [4]=='R' )|| (nombre[0]=='s' && nombre[1]=='a' && nombre[2]==
				'l'&& nombre[3]=='i' && nombre [4]=='r' ))
				{
				verdad=false;
				}
			else
				{
				printf ("Sueldo: ");
				scanf ("%f",&sueldo);
				if (contador == 1 )
					{
						mayor=nombre;
						menor=nombre;
						SMayor=sueldo;
						SMenor=sueldo;
					}
				else
					{
						if 	(sueldo>SMayor) 
							{
								mayor=nombre;
								SMayor=sueldo;	
							}
						else if (sueldo < SMenor )
							{
								menor=nombre;
								SMenor=sueldo;
							}
						else
							{
								// aqui los sueldos son iguales	
							}
					}
				n++;
				contador++;
				fflush(stdin);
			}
		}
		printf ("el sueldo mayor es: %g ", SMayor);
		printf (" de: %s \n " , mayor);
		printf ("el sueldo menor es: %g " , SMenor);
		printf (" de: %s \n", menor);		
		system ("pause");	// se pone para que haga un puse en el ejecutable
}
