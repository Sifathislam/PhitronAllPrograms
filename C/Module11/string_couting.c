#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <string.h>

int main(){

    char sting[100];
    scanf("%s", &sting);

    int count[26] ={0};
    for (int i = 0; i < strlen(sting); i++)
    {
        int val = sting[i] - 97;
        count[val]++;
    }

    for (int i = 0; i < strlen(sting); i++)
    {
       int val = sting[i] - 97;
      if (count[val] != 0)
       {
         printf("%c - %d\n", val + 97 , count[val]);
       }
    count[val] = 0;
       
    }
    
    

    return 0;
}