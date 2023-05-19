#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <string.h>

// Create recursive function 
void even_in_rerverse(int arry[], int n){
    if(n == -1) return;

    if(n % 2 == 0){
        printf("%d ", arry[n]);
    }
    even_in_rerverse(arry, n - 1);
}

int main(){
    // Take input 
    int n;
    scanf("%d", &n);
    int arry[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arry[i]);
    }

    // Call recursive function
    even_in_rerverse(arry, n - 1);
    return 0;
}