#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

 
 
int
main () 
{
  
static const char *strings[] =
    { "one", "two", "three", "four", "five", 
"six", "seven", "eight", "nine"
  };
  
int a, b;
  
 
scanf ("%d\n%d", &a, &b);
  
    // Complete the code.
    
for (int j = 1; j <= b; j++)
    
    {
      
 
if (j >= a && j <= 9 && j <= b)
	
	{
	  
printf ("%s\n", strings[j - 1]);
	
}
      
      else if (j > 9)
	
	{
	  
if ((j % 2) == 0)
	    
	    {
	      
printf ("even \n");
	    
}
	  
	  else
	    {
	      
printf ("odd \n");
	    
}
	
 
}
    
}
  
 
 
 
return 0;

}


 
