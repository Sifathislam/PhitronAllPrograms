#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int main(){

    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);

    if (a - b + c == d || a + b - c == d || a * b + c == d ||a * b - c == d || a + b * c == d || a - b * c == d)
    {
        printf("YES");
    }
    else{
        printf("NO");
    }
    

    return 0;
}