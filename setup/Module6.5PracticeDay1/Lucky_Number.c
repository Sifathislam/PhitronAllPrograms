#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int main(){

    int n, fNum,lNum; 
    scanf("%d", &n);

    fNum = n % 10;
    n /= 10; 
    lNum = n; 
    if (fNum % lNum == 0 || lNum % fNum == 0)
    {
        printf("YES");
    }
    else{
        printf("NO");
    }


    return 0;
}