#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <string.h>

int main(){
    // Take input 
    char s [1005];
    fgets(s, 1005, stdin);

    // Find the result
   int Capital = 0,Small = 0,Spaces = 0;

   for (int i = 0; i < strlen(s); i++)
   {
     if (s[i] >= 'a' && s[i] <= 'z')
     {
        Small++;
     }
     else if (s[i] >= 'A' && s[i] <= 'Z')
     {
        Capital++;
     }
     else if (s[i] == 32)
     {
        Spaces++;
     }
   }

    // Print the result 
    printf("Capital - %d\nSmall - %d\nSpaces - %d", Capital, Small, Spaces);
   

    return 0;
}