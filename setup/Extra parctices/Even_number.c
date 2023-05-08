#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <string.h>

// Create
void even_counter_P(int *n){

    for (int i = 1; i <= *n; i++)
    {   
        if (i % 2 == 0)
        {
            printf("%d ", i);
        }
    }
    
    
}

int main(){
    // Take input
    int n;
    scanf("%d", &n);
    
    // Function Call 
    even_counter_P(&n);

    return 0;
}