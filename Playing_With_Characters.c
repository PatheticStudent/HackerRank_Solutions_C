#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
char ch;
char s[10];
char sen[90];

scanf("%c", &ch);
printf("%c", ch);

scanf("\n%s", s);
printf("\n%s", s);

 scanf("\n");
scanf("%[^\n]%*s",sen);
printf("\n%s", sen);
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
