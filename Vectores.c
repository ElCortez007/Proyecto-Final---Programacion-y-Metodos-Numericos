/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
void funcion (int opcion);
int seleccion;

int main()
{
    printf("Saldran dos vectores\n");
    printf("1 imprimir vectores, 2 salir");
    scanf("%i", &seleccion);
    funcion (seleccion);
}
void funcion (int opcion){
    int i,j;
    int v[6], u[10];
    for (i=0; i<6; i++){
        printf("Introduce un valor para el vector 1: ");
        scanf("%i",&v[i]);
}
    printf("\n\n");
    for (j=0; j<10; j++){
    printf ("Introduce un valor para el vector 2: ");
    scanf("%i", &u[j]);
    }
    if (opcion==1); {
        for (i=0; i<6; i++){
            printf("Valor %i del vector v=%i\n",i,v[i]);
        }
        for (j=0; j<10; j++){
            printf ("Valor %i del vector v=%i\n",j,u[j]);
        }
    }
}

    

