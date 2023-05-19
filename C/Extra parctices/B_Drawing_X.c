#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <string.h>

int main(){

    int n;
    scanf("%d", &n);


    for (int i = 0; i < n; i++)
    {
            if (i == n / 2)
            {
                for (int k = 0; k < n; k++)
                {
                    if (k == n / 2)
                    {
                        printf("X");
                        continue;
                    }
                    printf("*");
                }
                    printf("\n");
                continue;
            }



        for (int j = 0; j < n; j++)
        {
            if (i == j)
            {
                printf("\\");
                continue;
            }

       if (i + j == n - 1)
            {
                printf("/");
                continue;
            }
            printf("*");
        }
        printf("\n");
    }

    return 0;
}