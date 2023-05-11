#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <string.h>

int vowel_print(char string_r[], int len){
   if(string_r[len] == '\0') return 0; // BASE CASE 

    int cnt = vowel_print(string_r, len + 1); //FUNC RECURSION

    if (string_r[len] >= 'A' && string_r[len] <= 'Z') //IF ELAS
    {
        string_r[len]=string_r[len] + 32;
    }
    
    if (string_r[len] == 'a' || string_r[len] == 'e' || string_r[len] == 'i'|| string_r[len] == 'o' || string_r[len] == 'u')
   {
    return cnt + 1;
   }
   else{
    return cnt;
   };
}


int main(){
    // Take input 
    char string[205];
    fgets(string, 205, stdin);
    // Call recursivee and print the value of the ans 
    int vowels = vowel_print(string, 0);
    printf("%d", vowels);

    return 0;
}