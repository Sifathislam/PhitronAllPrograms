#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <string.h>
#include <limits.h>

int main(){

    int n;
    scanf("%d", &n);

    int arry[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arry[i]);
    }

    int hiest_number = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        if (hiest_number < arry[i])
        {
            hiest_number = arry[i];
        }
        
    }
    
    for (int i = 0; i < n; i++)
    {
        printf("%d ", hiest_number - arry[i]);
    }
    
    

    return 0;
}