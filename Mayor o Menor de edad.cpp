/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <iostream>
using namespace std;
int main()
{
    int edad;

    printf( "\n Cual es tu edad?" );
    scanf( "%d", &edad );
    if ( edad <= 17)
    printf( "\n  Eres menor de edad", 17);
    else
     if ( edad >= 18 )
     printf( "\n Eres mayor de edad", 18);
    

    return 0;
}

