/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include<stdio.h>
#include<math.h>
   float kg, estm,IMC;

int main(){
  printf("Ingrese su peso en kg\n");
  scanf("%f",&kg);
  printf("Ingrese su estatura en metros\n");
  scanf("%f",&estm);
  IMC = kg/ (pow(estm,2));
  if (IMC<18.5){
  printf("Su peso esta bajo\n");
  }
  if (IMC>=18.5 && IMC<=24.9){
  printf("Su peso esta normal\n");
  }
  if (IMC>=25 && IMC<=29.9){
  printf("Tiene sobrepeso\n");
  }
  if (IMC>=30 && IMC<=34.9){
  printf("Tiene obesidad tipo 1\n");
  }
  if (IMC>=35 && IMC<=39.9)
  {printf("Tiene obesidad tipo 2\n");}
  else if (IMC>40){
  printf("Tiene hiper obesidad\n");
  }
  
    return 0;
}

