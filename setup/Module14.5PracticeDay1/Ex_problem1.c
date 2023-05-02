#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <string.h>

int main(){

    int n;
    scanf("%d", &n);

    int s = n - 1;
    int k = 1;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= s; j++)
        {
            printf("%c", 32);
        }
        for (int j = 1; j <= k; j++)
        {
            printf("%c", '*');
        }
        printf("\n");
        s--;
        k++;
        
        
    }
    

    return 0;
}