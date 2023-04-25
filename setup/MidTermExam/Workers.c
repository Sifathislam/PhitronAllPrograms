#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <string.h>

int main(){
    // Take input 
    int M1, M2, D;
    scanf("%d %d %d", &M1, &M2, &D);
    // The Calculation 
    D = D * M1;
    D = D / M2 ;
    // Print The result 
    printf("%d", D);

    return 0;
}