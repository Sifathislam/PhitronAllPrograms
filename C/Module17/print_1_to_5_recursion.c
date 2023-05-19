#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <string.h>

void one_to_five(int i){
    if (i == 6) return; 
    printf("%d", i);
    one_to_five(i + 1);
}

int main(){

    one_to_five(1);

    return 0;
}