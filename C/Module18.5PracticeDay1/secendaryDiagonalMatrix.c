#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <string.h>

int main(){

    // Take input 
    int row, col;
    scanf("%d %d", &row, &col);
    int arry[row][col];

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            scanf("%d", &arry[i][j]);
        }
        
    }
    
    int flag = 1;

    if (row != col)
    {
        flag = 0;
    }

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (i + j == row - 1)
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
        printf("This is a diagonal matrix\n");
    }
    else{
        printf("This not a sencedary diagonal matrix\n");
    }
    
    

    

    return 0;
}