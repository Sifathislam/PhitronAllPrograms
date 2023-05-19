#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <string.h>

int main(){
    // Take input
    int n, m;
    scanf("%d %d", &n, &m);
    int arry_One[n][m];
    int arry_Two[n][m];
    int arry_One_Two_Sum[n][m];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d", &arry_One[i][j]);
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
         scanf("%d", &arry_Two[i][j]);   
        }
    }

    // Create the sum 
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            arry_One_Two_Sum[i][j] = arry_One[i][j] + arry_Two[i][j];
        }
        
    }

    // Print The result 
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("%d ", arry_One_Two_Sum[i][j]);
        }
        printf("\n");
    }



    return 0;
}