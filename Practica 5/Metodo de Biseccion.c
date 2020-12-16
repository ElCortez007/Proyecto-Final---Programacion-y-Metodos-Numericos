/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double f(double);

int main()
{
    int imax,iter;
    double xi,xd,ea,em,test,xa,xaold;

    printf("\nMetodo de biseccion\n\n");
    printf("Introduce el extremo del intervalo por la izquierda\n");
    scanf("%lf",&xi);
    printf("Introduce el extremo del intervalo por la derecha\n");
    scanf("%lf",&xd);
    printf("Introduce el numero de iteraciones maximas\n");
    scanf("%d",&imax);
    printf("Introduce el error minimo del calculo\n");
    scanf("%lf",&em);

iter=0;
xa=0;

if(f(xi)*f(xd)>0)
    printf("No hay raiz en ese intervalo\n");
else{
    printf("\nIter    Raiz     Error aprox\n");
do{
    iter++;
    xaold=xa;
    xa=(xi+xd)/2;
    ea=fabs((xa-xaold)/xa)*100;
    test=f(xi)*f(xa);
    if(test<0)
        xd=xa;
    else if(test >0)
        xi=xa;
    else
        ea=0;
    printf("\n%d    %lf    %lf",iter,xa,ea);
} while(ea>em && iter<imax);
} return 0;
} double f(double x) 
{
 return x*x -2;
}






   


