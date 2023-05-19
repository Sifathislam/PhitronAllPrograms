#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <string.h>

void p_1_to_5(int a[] , int n,int i){
    if(i == n) return;
    printf("%d ", a[i]);
    p_1_to_5(a, n, i + 1);
}

int main(){

    int n;
    scanf("%d",&n);
    int a[n];
    for (int i = 0; i <n ; i++)
    {
        scanf("%d",&a[i]);
    }

    p_1_to_5(a, n, 0);
    

    return 0;
}