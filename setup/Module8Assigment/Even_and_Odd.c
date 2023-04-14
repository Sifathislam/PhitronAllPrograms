#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int main(){

    int n, a , even = 0, odd = 0;
    scanf("%d",&n);
    int arry[n];

    // This only with loop and simple way 
    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &a);
        if (a % 2 == 0)
        {
            even += a;
        }
        else{
            odd += a;
        }
    }
    printf("%d %d", even, odd);

    // This you can do it with loops 
    
    // for (int i = 0; i < n; i++)
    // {
    //     scanf("%d", &arry[i]);
    // }
    // for (int i = 0; i < n; i++)
    // {
    //     if (arry[i] % 2 == 0)
    //     {
    //         even += arry[i];
    //     }
    //     else{
    //         odd += arry[i];
    //     }
        
    // }

    // printf("%d %d", even, odd);
    
    return 0;
}