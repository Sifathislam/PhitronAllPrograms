#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <string.h>

int main(){

    int n;
    scanf("%d", &n);

    
    for (int i = 0; i < n; i++)
    {
        if (n == 1)
        {
            printf("#");
            break;
        }
        for (int j = 0; j < n; j++)
        {
            if (i == n/2)
            {
                printf("#");
                continue;
            }
            if (j == n/2)
            {
                printf("#");
                continue;
            }
            
            
            printf("*");
        }
        printf("\n");
        
    }
    

    return 0;
}