#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int main(){
     
     // Take inputs
    int n; 
    scanf("%d",&n);
    int arry[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arry[i]);
    }

// This used to reversed the array 
    int i = 0, j = n; 
    int ar[n];
    while (j--)
    {
    ar[i] = arry[j];
    i++;
    }
    
// Check the array are same or not by conditoin

    int yes = 0; //Check if loop prints yes n times 

    for (int count = 0; count < n; count++)
    {
        if (ar[count] == arry[count] )
        {
            yes++;
        }
    }

   // If Print n times than yes ; else no ;
    if (yes == n)
    {
        printf("YES");
    }
    else
    {
    printf("NO");
    }
    
    return 0;
}