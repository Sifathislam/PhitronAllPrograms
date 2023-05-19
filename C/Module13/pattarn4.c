#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <string.h>

int main(){

    int n, i , j , k, s; 
    scanf("%d", &n);
    s = (n - 1) + 20;
    k = 1;
    for ( i = 1; i <= (n * 2) - 1; i++)
    {
        for ( j = 1; j <= s; j++)
        {
            printf(" ");
        }

        for ( j = 1; j <= k; j++)
        {
            printf("%c", '*');
        }

      if (i <= n - 1)
      {
        s--;
        k = k + 2;
      }
      else
      {
        s++;
        k = k - 2;
      }

    printf("\n");
        
        
    }
    



    return 0;
}