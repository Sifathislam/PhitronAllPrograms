#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <string.h>

int main(){
    // Takes input 
    int n;
    scanf("%d", &n);
    int arry[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arry[i]);
    }
    

    // Now sort the arry 
    for (int i = 0; i < n - 1; i++)
    {
        for (int j =i + 1; j < n; j++)
        {
            if (arry[i] > arry[j])
            {
                int temp = arry[i];
                arry[i] = arry[j];
                arry[j] = temp;
            }
            
        }
        
    }
    
    // Print the result 
    if (n % 2 == 0)
    {
        printf("%d %d", arry[(n - 1)/2], arry[n / 2]);
    }
    else{
        printf("%d", arry[n / 2]);
    }
    


    return 0;
}