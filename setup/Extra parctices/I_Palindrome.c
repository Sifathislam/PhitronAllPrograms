#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int main(){

    int n;
    scanf("%d", &n);
    int temp = n, sum = 0;

    while (n > 0)
    {
        int ri = n % 10;

        sum =(sum * 10) + ri;      //  if 0.1 * 10 = 1 
        n = n / 10;
    }

    if (temp == sum)
    {
        printf("%d\nYES", sum);
    }
    else{
        printf("%d\nNO", sum);
    }
    
    


    return 0;
}
