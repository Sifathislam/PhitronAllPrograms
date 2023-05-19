#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <string.h>

int main(){

    int n;
    scanf("%d", &n);
    long long int count = 0;

    for(int i = 0; i < n; i++){
        long long int a;
        scanf("%lld", &a);
        long long int counter = 0;
        while(1)
        {
            if (a % 2 == 0)
            {
                counter++;
                a = a / 2;
            }
            else{
                break;
            }
        }
        if (count < counter)
        {
            count = counter;
        }
        
    }
    printf("%d", count);

    return 0;
}