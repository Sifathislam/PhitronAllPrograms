#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <string.h>

int main(){
    // Take input
    long long int test_Case;
    scanf("%lld", &test_Case);
    
    // Do the sum and print the result 
    for (long long int i = 0; i < test_Case; i++)
    {
        long long int n, m;
        long long int  sum_Of_Numbers = 0;
        scanf("%lld %lld", &n , &m);
        
        // Add the formula n*(n+1)/2
        long long int sum_of_n = n * (n + 1)/2;
        long long int sum_of_m = m * (m + 1)/2;

        if (n < m)
        {
            printf("%lld\n", sum_of_m - sum_of_n + n);
        }
        else if (n > m)
        {
            printf("%lld\n", sum_of_n - sum_of_m + m);
        }
        
        }

    return 0;
}