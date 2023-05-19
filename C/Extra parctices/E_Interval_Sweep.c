#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <string.h>

int main(){
    // Take input 
    int a, b;
    scanf("%d %d", &a, &b);
    // Apply the condition 
    if (a,b >= 1 && a == b || abs(a - b) == 1)
    {
        printf("YES");
    }
    else{
        printf("NO");
    }
    

    return 0;
}