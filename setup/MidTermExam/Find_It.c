#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <string.h>

int main(){
    // Take input 
    int n;
    scanf("%d", &n);

    int arry[1001];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arry[i]);
    }
    // Count 
    int x, count = 0;
    scanf("%d", &x);

    for (int i = 0; i < n; i++)
    {
        if (arry[i] == x)
        {
            count++;
        } 
    }
    
    // Print 
    printf("%d", count);
    
    

    return 0;
}