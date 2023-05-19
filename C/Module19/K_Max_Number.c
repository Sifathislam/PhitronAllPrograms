#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <string.h>
#include <limits.h>
int findMax(int arry[], int i, int size){
    if (i == size)
    {
        return INT_MIN;
    }
    int called_Recursion = findMax(arry, i + 1,size);
    if (arry[i] > called_Recursion)
    {
        return arry[i];
    }
    else
    {
        return called_Recursion;
    }
    
}


int main(){

    int n;
    scanf("%d",&n);
    int arry[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arry[i]);
    }
    
    int max_value = findMax(arry, 0, n);
    printf("%d", max_value);


    return 0;
}