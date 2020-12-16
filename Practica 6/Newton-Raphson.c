/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <math.h>
float
f1 (float x)
{
  return 8 * sin (x) * exp (-x) - 1;
}
float
d1 (float x)
{
return -8 * sin (x) * exp (-x) + 8 * cos (x) * exp (-x);
}
float
f2 (float x)
{
return 2 * x * x * x - 11 * x * x + 17.7 * x - 5;
}
float
d2 (float x)
{
return 6 * x * x - 22 * x + 17.7;
}
float
EA (float x1, float x0)
{
float o;
o = (x1 - x0) / x1;
  if (o < 0)
    o = -o;
return o * 100;
}
void



newtonRaphson ()

{
float x0, x1;
  int d = 0, imax;
  float o = 100;
  float error;
  
    scanf ("%f", &x0);
    printf ("Dame el valor del error: ");
    scanf ("%f", &error);
    printf ("Dame el maximo de iteraciones: ");
    scanf ("%d", &imax);
    printf (" d     xi          ea\n");
    printf (" %d     %f \n", d, x0);
        
  while ((o > error) && (d < imax))
  {
      x1 = x0 - f2 (x0) / d2 (x0);
    o = EA (x1, x0);
        d = d + 1;
      printf (" %d     %f  %f \n", d, x1, o);
        x0 = x1;
    }
    
}

void
secante ()
{
    float x0, x1, x2;
    float error, o = 100;
    int imax, d = 0;
    float df;
        
        printf ("Dame el valor de x0: ");
        scanf ("%f", &x0);
        printf ("Dame el valor de x1: ");
        scanf ("%f", &x1);
        printf ("Dame el valor del error: ");
        scanf ("%f", &error);
        printf ("Dame el maximo de iteraciones: ");
        scanf ("%d", &imax);
        printf ("d    xi      xi+1       f'(xi)     o\n");
        printf ("%d %f  %f   \n", 0, x0, x1);
  while ((o > error) && (d < imax))
    {
      df = (f2 (x0) - f2 (x1)) / (x0 - x1);
      x2 = x1 - f2 (x1) * (x0 - x1) / (f2 (x0) - f2 (x1));
      o = EA (x2, x1);
      d = d + 1;
      
        printf ("%d %f  %f   %f  %f \n", d, x1, x2, df, o);
        
      x0 = x1;
      x1 = x2;
    }
}
int
main ()
{
newtonRaphson ();
secante ();
  return 0;
  
}







