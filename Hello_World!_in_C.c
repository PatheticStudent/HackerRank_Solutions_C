#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <stdio.h>
#include <stdlib.h>

int main() {
    char line[100];
    scanf("%[^\n]%*s",line);
    printf("Hello, World!\n");
    printf("%s", line);
    return 0;
}
