#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <string.h>

int main(){
    char inputed_String[10000001];
    fgets(inputed_String, sizeof(inputed_String), stdin);
    inputed_String[strcspn(inputed_String, "\n")] = '\0'; // remove the trailing newline character
    
    long long int count[26]= {0};
    int input_String_length = strlen(inputed_String);
    for (int i = 0; i < input_String_length; i++)
    {
        int value = inputed_String[i] - 97;
        count[value]++;
    }
    
    for (int i = 0; i < 26; i++)
    {
       if (count[i] != 0)
       {
        int a = i + 97;
         printf("%c : %d\n",a, count[i]);
       }
       count[i] = 0;
       
    }
    

    return 0;
}