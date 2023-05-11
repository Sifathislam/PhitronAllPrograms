#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <string.h>

int palindrome_y_n(int arry[],int size,int i,int j,int count){

    if(i == size){
        return 0;
    }
    if (arry[i] == arry[j])
    {
        count++;
    }
    palindrome_y_n(arry, size, i + 1, j-1,count); 
    return count;
}


int main(){

    int n;
    scanf("%d", &n);

    int arry[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arry[i]);
    }
    
    int flag = palindrome_y_n(arry, n, 0, 5,0);

    if (flag == n)
    {
        printf("YES");
    }
    else{
        printf("NO");
    }
    

    return 0;
}