#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <string.h>


char upper_to_Small(char n){
    char upper_Small = n + 32;
    return upper_Small;
}

int main(){
 
    char n;
    scanf("%c", &n);

    char uppercase_to_small = upper_to_Small(n);
    printf("%c", uppercase_to_small);
    
    return 0;
}