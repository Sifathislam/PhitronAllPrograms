#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <string.h>

// Create the recursive

long long int sum_recursive(int arry[], int n){
    
    if(n < 0)return 0; // base case
    long long int sum = sum_recursive(arry, n - 1);
    return sum + arry[n];
}



int main(){
    // Take Input 
    int n;
    scanf("%d", &n);
    int arry[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arry[i]);
    }

    // Call the recursive and print
    long long sum = sum_recursive(arry, n - 1);
    
    printf("%lld",sum);
    return 0;
}