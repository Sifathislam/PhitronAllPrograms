#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <string.h>

int main(){
    // Take input 
    int n;
    scanf("%d", &n);

    int arry[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arry[i]);
    }
    
    // Count arry[i] + 1 is times
    int count = 0;

    // loop for count the arry[i] + 1
    for (int i = 0; i < n; i++)
    {
        int x = arry[i];
        int arryi_plus_one = x + 1;
        int flag = 0;
        for (int j = 0; j < n; j++)
        {
            if (arry[j] == arryi_plus_one)
            {
                flag = 1;
                break;
            }
            
        }
        
        if (flag == 1)
        {
            count++;
        }
       
    }
    
    
printf("%d", count);
    return 0;
}