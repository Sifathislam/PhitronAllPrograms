#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int main(){

    char n ;
    scanf("%c", &n);
    

    if (n == 'z')
    {
        n = 'a';
        printf("%c\n", n);
    }
    else
    {
        n = n + 1;
        printf("%c\n",n);

    }
    

    return 0;
}