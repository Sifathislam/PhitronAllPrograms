#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <string.h>

int main(){
    // Take input 
    int n;
    scanf("%d", &n);

    // Print the result 
    for (int i = 1; i <= n; i++)
    {
        if (n == 1)
        {
            printf("^");
            break;
        }
        
        for (int j = 1; j <= n - i; j++)
        {
            printf(" ");
        }
        for (int j = 1; j <= 2* i - 1 ; j++)
        {
            if (i % 2 != 0)
            {
                printf("^");
            }
            else{
                printf("*");
            }
            
        }
        printf("\n");
        
        
    }
    


    return 0;
}