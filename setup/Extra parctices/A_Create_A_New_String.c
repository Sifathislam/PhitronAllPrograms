#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <string.h>

int main(){
    // Take input
    char input1[1000], input2[1000];
    scanf("%s %s", &input1, &input2);
    // Find length 
    int lentof1 , lentof2;
    lentof1 = strlen(input1);
    lentof2 = strlen(input2);
    // Print The value 
    printf("%d %d\n", lentof1, lentof2);
    printf("%s %s\n", input1, input2);

    return 0;
}