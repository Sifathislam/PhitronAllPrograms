#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <string.h>

int main(){
    // Take input 
    int n;
    scanf("%d", &n);
    int arry[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arry[i]);
    }

    // Array Sort 
    
    int j, k, temp = 0;

        for ( j = 0; j < n; j++)
        {
            for ( k = j + 1; k < n; k++)
            {
                if (arry[k] < arry[j])
                {
                    temp = arry[j];
                    arry[j] = arry[k];
                    arry[k] = temp;
                }   
            }
        }


    // arry print
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arry[i]);
    }
    

    return 0;
}