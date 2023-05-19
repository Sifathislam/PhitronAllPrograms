#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <string.h>

int main(){

    char a[100], b[100];

    scanf("%s %s", a, b);

    for (int i = 0; i < strlen(b); i++)        // This how you can copy a string to another by yourself
    {
        a[i] = b[i];
    }
    printf("%s %s", a, b);

    // Or This the built-in functions for doing this work

    strcpy(a,b);

    printf("%s %s", a, b);

    return 0;
}