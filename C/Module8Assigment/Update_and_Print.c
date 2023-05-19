#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int main(){

    int n;
    scanf("%d", &n);
    int arry[n];
    
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arry[i]);
    } 

    int x , v;
    scanf("%d %d", &x, &v);

    for (int i = 0; i < n; i++)
    {
        if (i == x)
        {
            arry[i] = v;
        }
        
    }

    while (n--)
    {
        printf("%d ",arry[n]);
    }
    
    
    

    return 0;
}