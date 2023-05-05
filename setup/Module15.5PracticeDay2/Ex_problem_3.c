#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <string.h>


// Question: Write a function named count_odd() which receives an array of integers and the size of that array and counts the number of odd elements in that array and returns that. Call that function in the main function and print the count there.

// Make count odd counter 
int odd_func(int * arry, int * n){
    
    int count_odd = 0;
    for (int i = 0; i < *n; i++)
    {
        if (arry[i] % 2 != 0)
        {
            count_odd++;
        }
    }
    return count_odd;
}

// get input and call 

int main(){

    int n;
    scanf("%d", &n);
    int arry[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arry[i]);
    }

    int count_odd = odd_func(arry, &n);
    
    printf("%d", count_odd);
    return 0;
}