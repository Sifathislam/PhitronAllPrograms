#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <string.h>

int main(){
    // Take input 
    int n;
    scanf("%d", &n);
    int arry[n][n];
    
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &arry[i][j]);
        }
    }

    // Sumation of primary diagonal 

    int sum_primary = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == j)
            {
                sum_primary += arry[i][j]; 
            }
            
        }
        
    }

    // Sumation of the Secondary Diagonal 
    int sum_secondary = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i + j == n - 1)
            {
                sum_secondary += arry[i][j];
            }
            
        }
        
    }


    // Find the abstract differecne

int sum_difference = sum_primary - sum_secondary;

if (sum_difference < 0)
{
    sum_difference = abs(sum_difference);
}

printf("%d", sum_difference);



    


    



    return 0;
}