#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <string.h>

int main(){

    int n, m;
    scanf("%d %d", &n, &m);
    int arr[n][m];
    int matrix_element = n*m ;
    
    for (int i = 0; i < n; i++)
    {
        for (int j = 0;j < m; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    int zero_martix_counter = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (arr[n][m] == 0)
            {
                zero_martix_counter++;
            }
            
        }       
    }
    
    if (zero_martix_counter == matrix_element)
    {
        printf("THIS IS A ZERO MATRIX");
    }
    else{
        printf("THIS IS NOT A ZERO MATRIX");
    }
    

    return 0;
}