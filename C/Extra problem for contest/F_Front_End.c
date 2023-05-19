#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <string.h>

int main(){

    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int i, j = n;

    for (i = 0; i < n / 2; i++)
    {
        if(i > 0){printf(" ");}

        printf("%d", arr[i]);

        j--;
        if (i < n / 2) {printf(" %d", arr[j]);}
    }
    if (n % 2 != 0)
    {
        printf(" %d", arr[n/2]);
    }
    
    


    return 0;
}