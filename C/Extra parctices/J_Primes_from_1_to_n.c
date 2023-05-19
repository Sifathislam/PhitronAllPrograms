#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int main(){

    int n, result = 0;

    scanf("%d", &n);

     for (int i = 2; i <= n; i++)
        {
        for (int x = 1; x <= i; x++)
            {
                if (i % x == 0)
                {
                    result++;
                }
            
            }
            if (result == 2)
            {
                printf("%d ", i);
            }
            result = 0;
        }
    

    return 0;
}