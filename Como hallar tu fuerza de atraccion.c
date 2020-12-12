/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    const float g = 9.8; //gravedad
    float m = 0; //masa en kilogramos
    float w = 0; //fuerza de atraccion 
    printf("Introduce tu masa en kilogramos:");
    scanf("%f", &m);
    w = m*g; //formula para sacar la fuerza de atraccion
    printf("\ng %f \nm %f \nTu fuerza de atraccion es de %f w", g,m,w);

    return 0;
}

