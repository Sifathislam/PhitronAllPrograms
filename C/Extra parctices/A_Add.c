#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <string.h>


int sum(int a, int b){
    int c = a + b;
    return c;
}

int main(){

    int a, b;
    scanf("%d %d", &a, &b);

    int returend_sum = sum(a, b);
    printf("%d", returend_sum);

    return 0;
}