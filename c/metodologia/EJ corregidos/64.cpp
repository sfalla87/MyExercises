#include <stdio.h>
#include <stdlib.h>
#include <math.h>

main()
	{
		
		int n=0,unidad=0,decena=0,centena=0,millar=0;
		for (millar=0;millar<=1;millar++)
			{
				for (centena=0;centena<=9;centena++)
					{
						for (decena=0;decena<=9;decena++)
							{
								for (unidad=0;unidad<=9;unidad++)
								{
									n=millar*1000+centena*100+decena*10+unidad;
									
									if  (n==0)
										{
											// no hago nada por ser todos ceros
										}
									else
										{
											
											if (n ==(millar*millar*millar)+
											(centena*centena*centena)+(decena*decena*decena)+
											(unidad*unidad*unidad))
												{
													printf("%d es un numero AMSTRONG \n",n);
												}
											
										}
								}
							}
					}
			}
		system("pause");
		
	}
			
