#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <string.h>

void pirnt_number(int n){
    
    for (int i = 1; i <= n; i++)
    {
        if (i > 1)
        {
            printf("%c", 32);
        }
        printf("%d", i);   
    }
}

int main(){
    int n;
    scanf("%d", &n);
    pirnt_number(n);

    return 0;
}