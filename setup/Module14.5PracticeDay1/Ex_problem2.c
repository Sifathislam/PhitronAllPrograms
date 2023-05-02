#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <string.h>

int main(){

    int n;
    scanf("%d", &n);

    int s = 0, k = (n * 2) - 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= s; j++)
        {
            printf(" ");
        }
        for (int j = 1; j <= k; j++)
        {
            printf("%c", '*');
        }
        printf("\n");
        k -= 2;
        s++;

    }
     

    return 0;
}