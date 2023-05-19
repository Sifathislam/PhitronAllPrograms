#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <string.h>

void prin_1to_5(int i){
    if(i == 6) return;
    prin_1to_5(i + 1);
    printf("%d\n", i);
}


int main(){

    prin_1to_5(1);

    return 0;
}