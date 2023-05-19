#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <string.h>

int main(){
    int row, col, flag = 1;
    scanf("%d %d", &row, &col);
    int arry[row][col];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            scanf("%d", &arry[i][j]);
        }
    }
    // printf("f-%d\nr-%d\nc-%d\n", flag, row, col);

    if (row != col)
    {
        flag = 0;
    }
    
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (i == j)
            {
                continue;
            }
            if (arry[i][j] != 0)
            {
                flag = 0;
            }
            
        }
        
    }

    if (flag == 1)
    {
        printf("Yes it's a diagonal matrix");
    }
    else{
        printf("No it's not a diagonal matrix");
    }
    
    
    

    

    return 0;
}