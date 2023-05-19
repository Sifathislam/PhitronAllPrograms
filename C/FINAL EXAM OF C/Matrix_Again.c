#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <string.h>

int main(){

    // Take input 
    int n , m;
    scanf("%d %d", &n, &m);

    int arry[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d", &arry[i][j]);
        }
        
    }

    // Print the result 
    for (int i = n - 1; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("%d ", arry[i][j]);
        }
    }


     printf("\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = m - 1; j < m; j++)
        {
            printf("%d ", arry[i][j]);
        }
    }


    


    return 0;
}