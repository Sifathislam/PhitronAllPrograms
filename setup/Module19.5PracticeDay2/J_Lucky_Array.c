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
    // Find the minimum element 
    int minmum_element = arry[0];

    for (int i = 0; i < n; i++)
    {
        if (arry[i] < minmum_element)
        {
            minmum_element = arry[i];
        }
    }
    
    // Count the minimum elelment 
    int minimum_elelment_counter= 0;
    for (int i = 0; i < n; i++)
    {
        if (arry[i] == minmum_element)
        {
            minimum_elelment_counter++;
        }
    }

    // Check the lucky or not 
    if (minimum_elelment_counter % 2 == 0)
    {
        printf("Unlucky");
    }
    else{
        printf("Lucky");
    }
    
    

    

    return 0;
}