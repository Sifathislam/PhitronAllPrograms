// You are given an integer n or –n .If you are given n , print n to –n ,
// if you are given –n, print –n to n.
// See the sample output for more clarification. Implement it using function.

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <string.h>

// Create funciton 
void n_to_n(int * n){
    
    if (*n < 0)
    {
        for (int i = *n; i <= *n * -1; i++)
        {
            printf("%d ", i);
        }
    }
    if(*n > 0){
        for (int i = *n; i >= *n * -1 ; i--)
        {
            printf("%d ", i);
        }
        
    }
    

}


int main(){
// Take input 
    int n;
    scanf("%d", &n);
// Call Functions
    n_to_n(&n);

    return 0;
}