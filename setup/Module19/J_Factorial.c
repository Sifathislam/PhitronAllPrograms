#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <string.h>
// create the recuresive func 
long long int find_factorial(long long int n){
    if(n == 0) return 1;
    long long int Number = find_factorial(n -1);
    return Number * n;
}


int main(){
    // Take input 
    long long int n;
    scanf("%ld", &n);
    // Call func and Print result
    long long int factorial = find_factorial(n);
    printf("%ld", factorial);

    return 0;
}