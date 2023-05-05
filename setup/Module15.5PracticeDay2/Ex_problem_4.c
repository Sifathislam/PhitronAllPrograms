#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <string.h>
// Question: Make a function named change_it() which receives an array of integers and the size of that integer. In the function you need to change the value of the last index of that array and assign 100 there. You don’t need to return anything. After that print the array in the main function and see if it is updated.

// create the change the value function

void change_it(int * arry, int * n){

    arry[*n - 1] = 100;
    
}


int main(){
    // get input 
    int n;
    scanf("%d", &n);
    int arry[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arry[i]);
    }
    
    // call the function
    change_it(arry, &n);
    
    // print the arry 
    for (int i = 0; i < n; i++)
    {
        printf("%d ",arry[i]);
    }
    

    return 0;
}