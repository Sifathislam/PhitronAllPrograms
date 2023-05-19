#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <string.h>

int main(){
    
    int n;
    scanf("%d", &n);
    int arry[n];

    for (int i = 0; i < 100; i++)
    {
        scanf("%d", &arry[i]);
    }
    

    int count[11] ={0};

    for (int i = 0; i < n; i++)
    {
       int value = arry[i];
       count[value]++;
        
    }
    
    
    for (int i = 0; i < 6; i++)
    {
    printf("%d - %d\n",i,count[i]);
    }
    
    

    return 0;
}