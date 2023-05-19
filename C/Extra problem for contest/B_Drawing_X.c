#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <string.h>

int main(){

    int n;
    scanf("%d", &n);
     int n_X= n / 2;

    for (int i = 0; i < n; i++)
    {
       for (int j = 0; j < n; j++)
       {
        if (i == j)
        {
            if (n_X == i)
            {
                printf("X");
                continue;
            }
            else{
            printf("\\");
            continue;
            }
        }
        if(i + j == n - 1){
            printf("/");
            continue;
        }
        printf("*");
       }
       
        printf("\n");
    }
    

    return 0;
}