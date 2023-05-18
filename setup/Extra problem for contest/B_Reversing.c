#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <string.h>

int main(){

    int n;
    scanf("%d", &n);

    int arry[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arry[i]);
    }
    
    for (int i = 0; i < n; i++)
    {
        if (arry[i] == 0)
        {
            int j = i;
            for (int k = 0; k < j/2; k++)
            {
                int temp = arry[k];
                arry[k] = arry[j - k - 1];
                arry[j - k - 1] = temp;
            }
            
        }
        
    }
    
        
    for (int i = 0; i < n; i++)
    {
        printf("%d ",arry[i]);
    }

    


    return 0;
}