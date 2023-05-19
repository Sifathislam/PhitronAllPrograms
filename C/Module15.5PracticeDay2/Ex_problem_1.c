#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <string.h>



// Question: Write a function named my_abs() that receives an integer value as parameter and returns the absolute value of that. Absolute value means if the value is negative it will be converted to positive value. Then print the value in the main function.

// Answer:
void my_abs(int * ptr_n){
    if (*ptr_n < 0)
    {
     *ptr_n = abs(*ptr_n);
    }
    
}


int main(){

    int n;
    scanf("%d", &n);
    my_abs(&n);
    printf("%d", n);

    return 0;
}