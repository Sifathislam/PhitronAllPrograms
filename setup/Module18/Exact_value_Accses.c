#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <string.h>

int main(){
    //  Take input 
    int row , col;
    scanf("%d %d", &row, &col);
    int arry[row][col];

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            scanf("%d", &arry[i][j]);
        }
    }

    int exact_row, exact_col;

    scanf("%d %d", &exact_row, &exact_col);
    // Print the exact full row that i want on this way 
    for (int i = 0; i < col; i++)
    {
        printf("%d ", arry[exact_row][i]);
    }

    printf("\n");
    // Print the exact full colum that i want on this way 

    for (int i = 0; i < row; i++)
    {
        printf("%d ", arry[i][exact_col]);
    }

    return 0;
}