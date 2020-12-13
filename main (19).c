/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main() {
    int numero, i, x=0, y=1, z=1, segundo, j, a=0, b=1, c=1;
    float fibonacci;
    printf("Numero de elemtos de la serie:");
    scanf("%i", &numero);
    printf("1,");
    
    for (i=1;i<numero;i++) {
        z=x+y;
        x=y;
        y=z;
        printf("%i,",z);
    }
    printf("Numero de elementos de la serie:");
    scanf("%i", & segundo);
    printf("1,");

for (j=1; j< segundo;j++) {
    c=a+b;
    a=b;
    b=c;
    printf("%i,",c);
    }
    
    printf("El numero fibonacci es:");
    fibonacci= numero / segundo;
    printf ("%f", fibonacci);

    return 0;
}

