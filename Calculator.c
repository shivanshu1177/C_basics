#include <stdio.h>

 
int
main () 
{
  
float a, b;
  
char sig;
  
 
printf ("Enter numbers: ");
  
scanf ("%f %f", &a, &b);
  
printf ("Enter sign: ");
  
scanf ("%ch", &sig);
  
 
if (sig = '+')[{
      
printf ("%f", a + b);
    
}
  
 
  else if (sig = '-')
    
    {
      printf ("%f", a - b);
    }
  
 
  else if (sig = 'x')
    
    {
      printf ("%f", a * b);
    }
  
 
  else if (sig = '/')
    
    {
      printf ("%f", a / b);
    }
  
 
  else
    printf ("Invalid");
  
 
return 0;

}


