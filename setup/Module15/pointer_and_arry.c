#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <string.h>

int main(){

    int ar[5] = {10, 20, 30, 40, 50};
    
    // Way s of access array   
    printf("%d\n", *(ar + 1)); //behind the scen this happend when you type ar[1];
    printf("%d\n", *(1 + ar));
    printf("%d\n", ar[1]);
    printf("%d\n\n\n\n\n", 1[ar]);

    // With loops 
    for (int i = 0; i < 5; i++)
    {
    printf("%d\n", *(ar + i));
    printf("%d\n", *(i + ar));
    printf("%d\n", ar[i]);
    printf("%d\n", i[ar]);

    }
    




    return 0;
}