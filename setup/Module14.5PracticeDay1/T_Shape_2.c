#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <string.h>

int main(){

    int n, k, s, i, j;
    scanf("%d", &n);
    k = 1;
    s = n - 1;
    for(i = 1; i <= n ; i++)
    {
        for ( j = 1; j <= s; j++)
        {
            printf(" ");
        }
        
        for ( j = 1; j <= k; j++)
        {
            printf("%c", '*');
        }
        s--;
        k = k + 2;
        printf("\n");
        
    }
    

    return 0;
}