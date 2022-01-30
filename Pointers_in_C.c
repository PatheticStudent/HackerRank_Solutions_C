#include <stdio.h>
#include <stdlib.h>


void update(int *a,int *b) {
    // Complete this function 
   
    *a = *a + *b;
  
        *b = abs(*a - (*b + *b)); // Or We Can write *b=abs(*a-(2**b)); 

    
    
    /*  Note:       abs()  =>      *This function returns the absolute value of an integer. 
                                   *The absolute value of a number is always positive. 
                                   *Only integer values are supported in C.                         */

   
     
} 

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}
