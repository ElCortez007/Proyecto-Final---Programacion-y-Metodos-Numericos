/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/

#include <stdio.h>

int main(){
	int n, bin[999];
    int i = 0;
    printf("Ingresa un numero decimal: ");
    scanf("%i",&n);
	
    while (n != 0)
    {
          bin[i] = n % 2;
          n = n / 2;
          i++;
    }
    i--;
    printf("Binario: \n ");   
    while (i>=0)
    {
          printf("%i",bin[i]);
          i--;
          printf("\n ");
    }
   return 0;
}

