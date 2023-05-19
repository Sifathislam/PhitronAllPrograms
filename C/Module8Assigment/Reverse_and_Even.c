#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int main(){

    int n;
    scanf("%d", &n);
    int arry[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arry[i]);
    }
  
    while (n--)
    {
        if (n % 2 == 0)
        {
            printf("%d ", arry[n]);
        }
        
    }
    
    return 0;
}