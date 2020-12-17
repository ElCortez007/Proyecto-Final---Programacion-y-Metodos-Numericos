/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include<math.h>
float A[3][3] = {{10,2,-1},{-3,-6,2},{1,1,5}}; 
float b[3] = {27,-61.5,-21.5}; 
float x_inicial1,x_inicial2,x_inicial3,Ea1,Ea2,Ea3,x1old,x2old,x3old; 
float x_iteracion_1,x_iteracion_2,x_iteracion_3; 
int i,j;
int main()
{
for(j=0;j<5;j++){
    if(j==0){ 
        x_iteracion_1 = b[0]/A[0][0];
        x_iteracion_2 = ((-A[1][0]*x_iteracion_1)+b[1])/A[1][1];
        x_iteracion_3 = ((-A[2][0]*x_iteracion_1)-(A[2][1]*x_iteracion_2)+b[2])/A[2][2];
        printf("Metodo de Gaus Seidel\n" );
        printf("x_1 Iteracion 1 igual a %f\n",x_iteracion_1);
        printf("x_2 Iteracion 1 igual a %f\n",x_iteracion_2);
        printf("x_3 Iteracion 1 igual a %f\n",x_iteracion_3);
    }
    else {
        x1old = x_iteracion_1;
        x_iteracion_1 = ((-A[0][1]*x_iteracion_2)-(A[0][2]*x_iteracion_3)+b[0])/A[0][0];
        Ea1=fabs((x_iteracion_1-x1old)/(x_iteracion_1))*100;
        x2old = x_iteracion_2;
        x_iteracion_2 = ((-A[1][0]*x_iteracion_1)-(A[1][2]*x_iteracion_3)+b[1])/A[1][1];
        Ea2=fabs((x_iteracion_2-x2old)/(x_iteracion_2))*100;
        x3old = x_iteracion_3;
        x_iteracion_3 = ((-A[2][0]*x_iteracion_1)-(A[2][1]*x_iteracion_2)+b[2])/A[2][2];
        Ea3=fabs((x_iteracion_3-x3old)/(x_iteracion_3))*100;
        printf("x_1 Iteracion %d igual a %f, Con error de %f %%\n",j+1,x_iteracion_1,Ea1);
        printf("x_2 Iteracion %d igual a %f, Con error de %f %%\n",j+1,x_iteracion_2,Ea2);
        printf("x_3 Iteracion %d igual a %f, Con error de %f %%\n",j+1,x_iteracion_3,Ea3);
        }
    }
}