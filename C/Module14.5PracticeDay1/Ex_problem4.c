#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <string.h>

char small_to_UP(char n){
    char small_letter_to_Up = n - 32;
    return small_letter_to_Up;
}

int main(){

    char n;
    scanf("%c", &n);

    char uppcase = small_to_UP(n);
    printf("%c", uppcase);

    return 0;
}