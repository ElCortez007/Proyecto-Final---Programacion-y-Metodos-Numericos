/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include<math.h>
#include <stdio.h>
float derivadaDelante_1(float h, float (xi));
float derivadaAtras_1(float h, float(xi));
float derivadaCentrada_1(float h, float (xi));
float derivadaDelante_2(float h, float (xi));
float derivadaAtras_2(float h, float(xi));
float derivadaCentrada_2(float h, float (xi));
float derivadaDelante_3(float h, float (xi));
float derivadaAtras_3(float h, float(xi));
float derivadaCentrada_3(float h, float (xi));
float derivadaDelante_4(float h, float (xi));
float derivadaAtras_4(float h, float(xi));
float derivadaCentrada_4(float h, float (xi));
float error(float (xi), float h);

int main()
{
    int opcion;
    printf("Eliga una aproximacion de h con la que desea evaluar:\n");
    printf("1.h=0.5\n2.h=0.2\n3.h=0.1\n4.h=0.01\n");
    scanf("%d",&opcion);
    float h,xi,error;

    switch(opcion)
    {
        case 1:
        printf("Resultado hacia Adelante es: %f ",derivadaDelante_1(xi,h));
        error=fabs((0.2489-derivadaDelante_1(xi,h))/0.2489)*100;
        printf("\nEl error es= %f ",error);
        printf("\nEl resultado Centrada es: %f ",derivadaCentrada_1(xi,h));
        error=fabs((0.2489-derivadaCentrada_1(xi,h))/0.2489)*100;
        printf("\nEl error es= %f ",error);
        printf("\nEl resultado hacia Atras es: %f ",derivadaAtras_1(xi,h));
        error=fabs((0.2489-derivadaAtras_1(xi,h))/0.2489)*100;
        printf("\nEl error es= %f ",error);
        break;
          
          
        case 2:
        printf("\nEl resultado hacia Adelante es: %f ",derivadaDelante_2(xi,h));
        error=fabs((0.2489-derivadaDelante_2(xi,h))/0.2489)*100;
        printf("\nEl error es= %f ",error);
        printf("\nEl resultado Centrada es:%f ",derivadaCentrada_2(xi,h));
        error=fabs((0.2489-derivadaCentrada_2(xi,h))/0.2489)*100;
        printf("\nEl error es= %f ",error);
        printf("\nEl resultado hacia Atras es: %f ",derivadaAtras_2(xi,h));
        error=fabs((0.2489-derivadaAtras_2(xi,h))/0.2489)*100;
        printf("\nEl error es= %f ",error);
        break;
       
       
        case 3:
        printf("\nEl resultado hacia Adelante es: %f ",derivadaDelante_3(xi,h));
        error=fabs((0.2489-derivadaDelante_3(xi,h))/0.2489)*100;
        printf("\nEl error es= %f ",error);
        printf("\nEl resultado Centrada es:%f ",derivadaCentrada_3(xi,h));
        error=fabs((0.2489-derivadaCentrada_3(xi,h))/0.2489)*100;
        printf("\nEl error es= %f ",error);
        printf("\nEl resultado hacia Atras es: %f ",derivadaAtras_3(xi,h));
        error=fabs((0.2489-derivadaAtras_3(xi,h))/0.2489)*100;
        printf("\nEl error es= %f ",error);
        break;
        
        
        case 4:
        printf("\nEl resultado hacia Adelante es: %f ",derivadaDelante_4(xi,h));
        error=fabs((0.2489-derivadaDelante_4(xi,h))/0.2489)*100;
        printf("\nEl error es= %f ",error);
        printf("\nEl resultado Centrada es:%f ",derivadaCentrada_4(xi,h));
        error=fabs((0.2489-derivadaCentrada_4(xi,h))/0.2489)*100;
        printf("\nEl error es= %f ",error);
        printf("\nEl resultado hacia Atras es: %f ",derivadaAtras_4(xi,h));
        error=fabs((0.2489-derivadaAtras_4(xi,h))/0.2489)*100;
        printf("\nEl error es= %f ",error);
        break;
    }
}
float derivadaDelante_1(float h, float (xi)){
    float fxi, aproximacion_1, aproximacion_2,derivada;
    xi=0.6;
    h=0.5;
    fxi=1-exp(-xi/0.2);
    aproximacion_1=1-exp(-(xi+h)/0.2);
    aproximacion_2=1-exp(-(xi+(2*h))/0.2);
    derivada=(-aproximacion_2+4*aproximacion_1-3*fxi)/(2*h);
    return derivada;
}
float derivadaAtras_1(float h, float (xi)){
    float fxi, aproximacion_1, aproximacion_2,derivada;
    xi=0.6;
    h=0.5;
    fxi = 1-exp(-xi/0.2);
    aproximacion_1 = 1-exp(-(xi-h)/0.2);
    aproximacion_2 = 1-exp(-(xi-(2*h))/0.2);
    derivada= (3*fxi-4*aproximacion_1+aproximacion_2)/(2*h);
    return derivada;
}
float derivadaCentrada_1(float h, float (xi)){
    float fxi, aproximacion_1, aproximacion_2,derivada, aproximacion_3, aproximacion_4;
    xi=0.6;
    h=0.5;
    fxi = 1-exp(-xi/0.2);
    aproximacion_1 = 1-exp(-(xi+h)/0.2);
    aproximacion_2 = 1-exp(-(xi+(2*h))/0.2);
    aproximacion_3= 1-exp(-(xi-h)/0.2);
    aproximacion_4 = 1-exp(-(xi-(2*h))/0.2);
    derivada = (-aproximacion_2+8*aproximacion_1-8*aproximacion_3+aproximacion_4)/(12*h);
    return derivada;
}
float derivadaDelante_2(float h, float (xi)){
    float fxi, aproximacion_1, aproximacion_2,derivada;
    xi=0.6;
    h=0.2;
    fxi=1-exp(-xi/0.2);
    aproximacion_1=1-exp(-(xi+h)/0.2);
    aproximacion_2=1-exp(-(xi+(2*h))/0.2);
    derivada=(-aproximacion_2+4*aproximacion_1-3*fxi)/(2*h);
    return derivada;
}
float derivadaAtras_2(float h, float (xi)){
    float fxi, aproximacion_1, aproximacion_2,derivada;
    xi=0.6;
    h=0.2;
    fxi = 1-exp(-xi/0.2);
    aproximacion_1 = 1-exp(-(xi-h)/0.2);
    aproximacion_2 = 1-exp(-(xi-(2*h))/0.2);
    derivada= (3*fxi-4*aproximacion_1+aproximacion_2)/(2*h);
    return derivada;
}
float derivadaCentrada_2(float h, float (xi)){
    float fxi, aproximacion_1, aproximacion_2,derivada, aproximacion_3, aproximacion_4;
    xi=0.6;
    h=0.2;
    fxi = 1-exp(-xi/0.2);
    aproximacion_1 = 1-exp(-(xi+h)/0.2);
    aproximacion_2 = 1-exp(-(xi+(2*h))/0.2);
    aproximacion_3= 1-exp(-(xi-h)/0.2);
    aproximacion_4 = 1-exp(-(xi-(2*h))/0.2);
    derivada = (-aproximacion_2+8*aproximacion_1-8*aproximacion_3+aproximacion_4)/(12*h);
    return derivada;
}
float derivadaDelante_3(float h, float (xi)){
    float fxi, aproximacion_1, aproximacion_2,derivada;
    xi=0.6;
    h=0.1;
    fxi=1-exp(-xi/0.2);
    aproximacion_1=1-exp(-(xi+h)/0.2);
    aproximacion_2=1-exp(-(xi+(2*h))/0.2);
    derivada=(-aproximacion_2+4*aproximacion_1-3*fxi)/(2*h);
    return derivada;
}
float derivadaAtras_3(float h, float (xi)){
    float fxi, aproximacion_1, aproximacion_2,derivada;
    xi=0.6;
    h=0.1;
    fxi = 1-exp(-xi/0.2);
    aproximacion_1 = 1-exp(-(xi-h)/0.2);
    aproximacion_2 = 1-exp(-(xi-(2*h))/0.2);
    derivada= (3*fxi-4*aproximacion_1+aproximacion_2)/(2*h);
    return derivada;
}
float derivadaCentrada_3(float h, float (xi)){
    float fxi, aproximacion_1, aproximacion_2,derivada, aproximacion_3, aproximacion_4;
    xi=0.6;
    h=0.1;
    fxi = 1-exp(-xi/0.2);
    aproximacion_1 = 1-exp(-(xi+h)/0.2);
    aproximacion_2 = 1-exp(-(xi+(2*h))/0.2);
    aproximacion_3= 1-exp(-(xi-h)/0.2);
    aproximacion_4 = 1-exp(-(xi-(2*h))/0.2);
    derivada = (-aproximacion_2+8*aproximacion_1-8*aproximacion_3+aproximacion_4)/(12*h);
    return derivada;
}
float derivadaDelante_4(float h, float (xi)){
    float fxi, aproximacion_1, aproximacion_2,derivada;
    xi=0.6;
    h=0.01;
    fxi=1-exp(-xi/0.2);
    aproximacion_1=1-exp(-(xi+h)/0.2);
    aproximacion_2=1-exp(-(xi+(2*h))/0.2);
    derivada = (-aproximacion_2+4*aproximacion_1-3*fxi)/(2*h);
    return derivada;
}
float derivadaAtras_4(float h, float (xi)){
    float fxi, aproximacion_1, aproximacion_2,derivada;
    xi=0.6;
    h=0.01;
    fxi = 1-exp(-xi/0.2);
    aproximacion_1 = 1-exp(-(xi-h)/0.2);
    aproximacion_2 = 1-exp(-(xi-(2*h))/0.2);
    derivada= (3*fxi-4*aproximacion_1+aproximacion_2)/(2*h);
    return derivada;
}
float derivadaCentrada_4(float h, float (xi)){
    float fxi, aproximacion_1, aproximacion_2,derivada, aproximacion_3, aproximacion_4;
    xi=0.6;
    h=0.01;
    fxi = 1-exp(-xi/0.2);
    aproximacion_1 = 1-exp(-(xi+h)/0.2);
    aproximacion_2 = 1-exp(-(xi+(2*h))/0.2);
    aproximacion_3= 1-exp(-(xi-h)/0.2);
    aproximacion_4 = 1-exp(-(xi-(2*h))/0.2);
    derivada = (-aproximacion_2+8*aproximacion_1-8*aproximacion_3+aproximacion_4)/(12*h);
    return derivada;
}