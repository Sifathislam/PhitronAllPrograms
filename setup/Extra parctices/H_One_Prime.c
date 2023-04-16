#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int main(){

    int n, result = 0;

    scanf("%d", &n);

  for (int i = 1; i <= n; i++)
  {
    if (n % i == 0 )
    {
        result++;
    }
  }
  
     if (result == 2)
    {
        printf("YES");
    }
    else if (n == 0)
    {
        printf("NO");
    }
    
    else{
        printf("NO");
    }

    return 0;
}