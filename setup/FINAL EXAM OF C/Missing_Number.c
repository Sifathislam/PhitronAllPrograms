#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <string.h>

int main(){
    // Take input of test case 
    int T;
    scanf("%d", &T);

    for (int i = 0; i < T; i++)
    {
        int s, a, b, c;
        scanf("%d %d %d %d", &s, &a, &b, &c);
        
        long long int result = a + b + c;
        printf("%lld\n", s - result);
    }
    

    return 0;
}