#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <string.h>

void recursion_func(int n){
    if (n == 0) return;  //base case
    printf("I love Recursion\n");
    recursion_func(n - 1);
}

 int main(){
    // Take input
    int n;
    scanf("%d", &n);

    // Call the recursion 
    recursion_func(n);
 

     return 0;
 }