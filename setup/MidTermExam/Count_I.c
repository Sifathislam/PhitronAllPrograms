#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <string.h>

int main(){
    // Take Input 
    int n;
    scanf("%d", &n);
    int arry[n];
    
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arry[i]);
    }

    // Counter
    int even = 0, odd = 0;
    for (int i = 0; i < n; i++)
    {
        if (arry[i] % 2 == 0)
        {
            even++;
        }
        else{
            odd++;
        }    
    }

    printf("%d %d", even, odd);
    
    

    return 0;
}