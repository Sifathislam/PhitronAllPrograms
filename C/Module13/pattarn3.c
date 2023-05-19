
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <string.h>

int main(){

    int n, i, j;
    scanf("%d", &n);
    int m = 1;
    for (i = 1; i <= n; i++)
    {
        for ( j = 1 ; j <= m; j++)
        {
            printf("%d ", j);
        }
        m++;
        printf("\n");
        
    }

    // Reverse way 

    int k = n ;
    
    for ( i = 1; i <= n; i++)
    {
        for ( j =1 ; j <= k; j++)
        {
            printf("%d ", j);
        }
        k--;
        printf("\n");
        
    }
    
    return 0;
}