#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <string.h>

int main(){
    // Take input 
    int n;
    scanf("%d", &n);

    // Run the loop and check the squr or rectangele
    for (int i = 1; i <= n; i++)
    {
        int a, b;
        scanf("%d %d", &a, &b);

        if (a == b)
        {
            printf("Square\n");
        }
        else{
            printf("Rectangle\n");
        }
        
    }
    

    return 0;
}