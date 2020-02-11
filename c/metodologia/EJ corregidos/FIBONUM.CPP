//Programed By FR, Mo 24/04/2006
//librer¡as
#include <stdio.h>

//implementaci¢n de funciones
int fib (int n)
{
   int s;

   if ((n == 0) || (n == 1))
   return(1);
   else s=fib(n-1)+fib(n-2);
   return(s);
} //fib

void info (void)
{
   printf("El programa calcucla el t‚rmino n ‚simo de la secuencia de Fibonacci\n");
   printf("Escriba un entero positivo entre 1 y 21: ");
} //info

//funcion principal
void main(void)
{
   int n;

   info();

   scanf("%d",&n);

   printf("F%d = %d",n,fib(n));
} //main

