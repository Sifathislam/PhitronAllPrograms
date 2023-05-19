#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <string.h>

int main(){

    int n, i;
    scanf("%d", &n);
    

    // This is upsidedown 
    int s = n - 1;
    int k = 1;
    for ( i = 1; i <= n; i++)
    {
        for (int j = 1; j <= s; j++)
        {
            printf(" ");
        }
        for (int j = 1; j <= k; j++)
        {
            printf("%c", '*');
        }
        s--;
        k = k + 2;
        printf("\n");        
    }
    
    // Or This is downsideUp 
   int  m = 0;
   int p = (n * 2) - 1;

    for ( i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            printf(" ");
        }
        for (int j = 1; j <= p; j++)
        {
            printf("%c", '*');
        }
        m++;
        p = p - 2;
        printf("\n");
        
    }
    

    return 0;
}