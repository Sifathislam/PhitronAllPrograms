#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <string.h>
#include<limits.h>

int main(){
    // Take input 
    int n , k;
    scanf("%d %d", &n, &k);

    // Do the oparation 
    int While_i = 1, j = 0;

    while (While_i == 1)
    {
        int temp = INT_MAX; 
     for ( int i = 1; i <= k; i++)
     {
        int inputed_number;
        scanf("%d", &inputed_number);
        n--;
        if (inputed_number < temp)
        {
            temp = inputed_number;
        }
     }  
        printf("%d ", temp);

        if (n <= 0)
        {
            break;
        }
    }
    
    

    return 0;
}