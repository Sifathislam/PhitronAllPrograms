#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <string.h>

int length_recursive(char name[], int i){
    if (name[i] == '\0') return 0;
    int len = length_recursive(name,i+1);
    return len + 1;
}

int main(){

    char name[20] = "Sifath islam";
    int length = length_recursive(name, 0);
    printf("%d", length);
    return 0;
}