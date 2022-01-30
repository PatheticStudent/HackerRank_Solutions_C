#include <stdio.h>
/*
Add `int max_of_four(int a, int b, int c, int d)` here.
*/
int max_of_four(int a, int b,int c,int d)
{
    if(a<b && c<b && d<b)
    {
        
        return b;
    }
    
    else if(b<c && a<c && d<c)
    {
        return c;
    }
    
        else if(c<d && a<d && b<d)
        {
            return d;
        }
        
            return a;
    
}

int main() { 
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}
