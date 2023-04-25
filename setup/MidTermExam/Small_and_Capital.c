#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <string.h>

int main(){
    // Take input  
    char s[1001];
    scanf("%s", s);

    // Oparation 
    int size = strlen(s);
    int small = 0, capital = 0;
    for (int i = 0; i <size ; i++)
    {
        if (s[i] >= 'a' && s[i] <= 'z')
        {
            small++;
        }
        else if(s[i] >= 'A' && s[i] <= 'Z'){
            capital++;
        }   
    }
    // Print the result 
    printf("%d %d", capital, small);
    
    

    return 0;
}