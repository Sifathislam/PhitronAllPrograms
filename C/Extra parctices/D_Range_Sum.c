#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <string.h>
#include <limits.h>

int main(){
    // // Take input of test case
    int test_case;
    scanf("%d", &test_case);

    // // Take input the number and sum tham like squance
    for (int i = 0; i < test_case; i++)
    {
        int inputed_num1, inputed_num2;
        scanf("%d %d", &inputed_num1, &inputed_num2);
        
        long long int D_range_sum = 0;

        for (int j = inputed_num1; j <= inputed_num2; j++)
        {
            D_range_sum += j;
        }
        printf("%lld\n", D_range_sum);
    }
    // printf("%lld", INT_MAX);
    
    return 0;
}