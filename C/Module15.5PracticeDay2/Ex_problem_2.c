#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <string.h>

// Question: Write a function named my_len() which receives a string as a parameter and then counts the length of that string and returns that count. Don’t use strlen() function to get the length of the string. After receiving that count in the main function print it.
// Note: The string will not have any spaces.

// Answer:
int my_len(char *input){

        int count = 0;

        int i= 0;
        while (1)
        {
          if (input[i] == '\0')
          {
            break;
          }
          else{
            count++;
          }
          
          i++;
        }
        return count;
}
int main(){

    char input[100];
    scanf("%s", input);
    int count = my_len(input);
    printf("%d", count);


    return 0;
}