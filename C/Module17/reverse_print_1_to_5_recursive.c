#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <string.h>

void reverse_1_to_5(int i){
    if (i == 0) return;   //base case
    if (i % 2 == 0)
    {
    printf("%d - is even  ", i);
    }
    printf("%d\n", i);
    reverse_1_to_5(i - 1);  // recurseive function controllar
}

int main(){

    reverse_1_to_5(10);   //call function

    return 0;
}