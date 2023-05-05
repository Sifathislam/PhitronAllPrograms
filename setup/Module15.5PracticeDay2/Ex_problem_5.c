#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <string.h>

// Question: Write a function named swap_it() which will receive addresses of two integer variables. That means you need to receive them as integer pointers in the function parameter. In the function you need to swap the values of each other, you know that you can access the values of them by using dereferencing. You don’t need to return anything. After the function calls print the values of those two variables in the main function and see if anything happens!

// create the function and swap the vaule 

void swap_it(int * a, int * b){
    
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main(){
    // take input 
    int a, b;
    scanf("%d %d", &a , &b);
    // call function
    swap_it(&a, &b);
    // print the swap vaule  
    printf("%d %d", a, b);

    return 0;
}