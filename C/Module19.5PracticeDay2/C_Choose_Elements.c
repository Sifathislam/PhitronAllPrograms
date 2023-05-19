#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <string.h>

int main(){
    // Take input 
    int n, k;
    scanf("%d %d", &n, &k);
    int arry[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arry[i]);
    }
    
    // Sort the arry by selection sort 
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arry[i] < arry[j])
            {
                int temp = arry[i];
                arry[i] = arry[j];
                arry[j] = temp;
            }
            
        }
    }

    // Sum the bigest k number elemet or break; if arry[i] in - 
    
    long long int sum_arry = 0;

    for (int i = 0; i < k; i++)
    {
        if (arry[i] < 0)
        {
            break;
        }
         
        sum_arry += arry[i];
    }
    

    // Print the result 
    printf("%lld", sum_arry);


    
    return 0;
}