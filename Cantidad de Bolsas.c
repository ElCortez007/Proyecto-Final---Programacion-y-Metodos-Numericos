/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
int main ()
{
    int ctbolsas;//cantidad bolsas
    float costoProducto,porcentajeDesc,descuento,tarifaFinal,costoBolsas;
    char dep;
    printf("Departamentos:\n");
    printf("P) Perfumeria\n");
    printf("S) Salchichoneria\n");
    printf("C) Carniceria\n");
    printf("L) Limpieza\n");
    printf("A que departamento pertenece su producto? opcion (P,S,C,L): ");
     scanf("%c",&dep);
    printf("Cual es el costo del producto? ");
     scanf("%f",&costoProducto);    
    printf("Cantidad de bolsas que requiere: ");
     scanf("%d",&ctbolsas);

    switch (dep)
    {
    	case 'P':
    	          porcentajeDesc=0.20;
    	          break;
    	case 'S': 
    	          porcentajeDesc=0.40;
    	          break;
    	case 'C':
    		      porcentajeDesc=0.20;
    	          break;
    	case 'L':
    		      porcentajeDesc=0.35;
    	          break;
	}
    descuento=costoProducto*porcentajeDesc;
    costoBolsas= ctbolsas*0.10;
    tarifaFinal= costoProducto - descuento + costoBolsas;

    printf("\nCosto producto %.2f",costoProducto);
    printf("\nDescuento %.2f",descuento);
    printf("\nCosto de las bolsas %.2f",costoBolsas);
    printf("\nTarifa final: %.2f",tarifaFinal);

	return 0;
}


