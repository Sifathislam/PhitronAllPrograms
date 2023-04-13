#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <limits.h>

int main(){

    int n;
    scanf("%d", &n);
    int arry[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arry[i]);
    }
    int min = arry[0];
    for (int i = 1; i < n; i++)
    {
        if (arry[i] < min)
        {
            min = arry[i];

           printf("%d",min);
        }
        
    }
    
    

    return 0;
}