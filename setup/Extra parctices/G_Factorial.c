#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int main(){

    int n;
    long long int result = 1;

    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        int f;
        scanf("%d", &f);

        for (int x = 1; x <= f; x++)
        {
            result *= x;
        }
        printf("%lld\n", result);
        result = 1;
    }

    

    return 0;
}