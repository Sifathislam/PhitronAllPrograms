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
    
    // Print the result 
    int flag = 1;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == j && arry[i][j] != 1)
            {
                flag = 0;
                break;
            }
            if (i != j && arry[i][j] != 0)
            {
                flag = 0;
                break;
            }
            
        }
        
    }


    if (flag == 1)
    {
        printf("YES");
    }
    else{
        printf("NO");
    }
    
    

    return 0;
}