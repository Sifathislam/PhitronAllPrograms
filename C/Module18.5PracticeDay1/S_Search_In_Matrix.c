#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <string.h>

int main(){
    // Take input 
    int n, m;
    scanf("%d %d", &n, &m);
    int arry[n][m];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d", &arry[i][j]);
        }
    }

    int x;
    scanf("%d", &x);
    int flag = 0;
// Tervering and find the x number on the arry 
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
         if (arry[i][j] == x)
         {
            flag = 1;
         }
        }
    }
    // print the result 

    if (flag ==  1)
    {
        printf("will not take number");
    }
    else{
        printf("will take number");
        }
    




    return 0;
}