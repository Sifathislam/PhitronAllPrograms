#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <string.h>

int main(){
// Take input of test case 
    int test;
    scanf("%d", &test);

    // Make the oparation happend
    for (int i = 0; i < test; i++)
    {
        // Take input n of loop 
        int n;
        scanf("%d", &n);
        
        // Take input the arry 
        int arr[n];
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &arr[j]);
        }
        
        // Count how even and oddd are in the arry
        int even_count = 0, odd_count = 0;

        for (int j = 0; j < n; j++)
        {
            if (arr[j] % 2 == 0)
            {
                even_count++;
            }
            else{
                odd_count++;
            }

        }

        // Print The result how many minmum way to equl the arry 
        if ( even_count == odd_count){
            printf("%d\n", 0);
        }
        else if (n % 2 != 0)
        {
            printf("%d\n", -1);
        }
        else{
            printf("%d\n",abs(even_count - odd_count) / 2);
        }
        
    }


    return 0;
}