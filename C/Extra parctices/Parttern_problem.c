#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <string.h>

int main(){

     int n;
     scanf("%d", &n);
    int k = n;
    int o = (n * 2) - 1;
     for (int i = 0; i < (n * 2)-1; i++)
     {
        if (i < n)
        {
          
        
        
        if (i >= 1)
        {
                int l = n;
            for (int m = 0; m < i; m++)
            {
            printf("%d", l);
            l--;
            }
            
        }
        
        for (int j = o; j > 0 ; j--)
        {
            printf("%d",k);
        }
        k--;
        o = o -2;
        if (i >= 1)
        {
            int l = n - i;
            for (int m = 0; m < i; m++)
            {
            l++; 
            printf("%d", l);
            }
            
        }
        }
        if (i > n)
        {
        
     if (i >= 1)
        {
                int l = n;
            for (int m = 0; m < i; m++)
            {
            printf("%d", l);
            l--;
            }
            
        }
        k++;
        o = o + 2;
         for (int j = o; j > 0 ; j--)
        {
            printf("%d",k);
        }
        if (i >=1)
        {
            int l = n - i;
            for (int m = 0; i < i; i++)
            {
                l++;
                printf("%d", l);
            }
            
        }
        }
     
        printf("\n");
     }
        
       
    return 0;
}