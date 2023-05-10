#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <string.h>

// create the recursion
void pirnt_n_to_1(int n){
    if(n == 0) return; // base case
    printf("%d", n);
    if (n > 1)
    {
        printf(" ");
    }
    pirnt_n_to_1(n - 1);
}

int main(){
    // Take input 
    int n;
    scanf("%d", &n);
    // Call The recursion
    
    pirnt_n_to_1(n);



    return 0;
}