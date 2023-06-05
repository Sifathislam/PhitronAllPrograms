#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <string.h>

int main(){

    int n;  // Take input of n
    scanf("%d", &n);
    int k = n; //first half n time print 
    int o = (n * 2) - 1; // first half print times 
    int oo = 3; // secenod half print 
    int kk = 2;  //secenod half prnt  
     for (int i = 0; i < (2 * n )- 1; i++)
     {
        if (i < n)    // First Half
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
      if(i <= n-1){
            printf("\n");
            }
        }





        else{  // Secenod Half 
        int  l = n;
        for (int m = 0; m < n - kk; m++)
        {
            printf("%d",l);
            l--;
        }

        for (int j = oo; j > 0 ; j--)
        {
            printf("%d", kk);
        }
        oo +=2;
        kk++;
         int ll = kk ;
        for (int m = 0; m <= n - kk; m++)
        {
            printf("%d", ll);
            ll++;
        }
        printf("\n");
        
        }
        }
     
     
    return 0;
}