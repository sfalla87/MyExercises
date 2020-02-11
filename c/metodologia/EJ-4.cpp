#include <stdio.h>
#include <stdlib.h>
main ()
{
	int num,num2,suma,resta,producto,division;
	num=0;
	printf("Introduce un numero\n");
	scanf("%d",&num);
	printf("Introduce otro numero\n");
	scanf("%d",&num2);
	//operaciones
	suma=num+num2;
	resta=num-num2;
	producto=num*num2;
	division=num/num2;
	//Suma
	printf("La suma de los numeros %d y %d es: %d\n",num,num2,suma);
	//Resta
	printf("La resta de los numeros %d y %d es: %d\n",num,num2,resta);
	//producto
	printf("El producto de los numeros %d y %d es: %d\n",num,num2,producto);
	//Division
	printf("La division de los numeros %d y %d es: %d\n",num,num2,division);
  system("PAUSE");	
  return 0;
}
