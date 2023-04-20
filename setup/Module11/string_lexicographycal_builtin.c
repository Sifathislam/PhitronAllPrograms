#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <string.h>

int main(){
    
    char a[100], b[100];
    scanf("%s %s", a, b);
    
    int v = strcmp(a, b);

    if (v < 0)
    {
        printf("A small");
    }
    else if (v > 0)
    {
        printf("B small");
    }
    else{
        printf("Same");
    }
    

    return 0;
}