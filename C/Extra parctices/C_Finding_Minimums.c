#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <string.h>
#include <limits.h>
int main(){

    int n, k;
    scanf("%d %d", &n, &k);
int aa;
    for (int i = 0; i < n; i+=k)
    {
        int min_value = INT_MAX;
        for ( int j = 0; j < k; j++)
        {
            int inputed_number;
            scanf("%d", &inputed_number);

            if (inputed_number < min_value)
            {
                min_value = inputed_number;
            }
        }
        printf("%d ", min_value);
        
    }
    

    return 0;
}