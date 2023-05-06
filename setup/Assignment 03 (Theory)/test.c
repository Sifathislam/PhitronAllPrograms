#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <string.h>


// Create is_palindrome function
int is_palindrome(char * string){


    int string_len = strlen(string);
    int i = 0, plaindrome_count=0;


    while (string_len--)
    {
        if(string[i] == string[string_len]){
           
            plaindrome_count++;
        }
        i++;
    }


    if (plaindrome_count == strlen(string))
    {
        return 1;
    }
    else{
        return 0;
    }
}






int main(){
    // Take input
    char input_String[11];
    scanf("%s", input_String);


    // Call function
    int return_value = is_palindrome(input_String);


    // Check Palindrome or not
    if (return_value == 1)
    {
        printf("Palindrome");
    }
    else if (return_value == 0)
    {
        printf("Not Palindrome");
    }
   
   


    return 0;
}