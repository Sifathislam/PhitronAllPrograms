#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <string.h>

int main(){
    // Take input
    char inputed_String[1001];
    scanf("%s", inputed_String);

    // Counter 
    int size = strlen(inputed_String);
    int count[26] = {0};
    for (int i = 0; i < size; i++)
    {
        int val = inputed_String[i] - 'a';
        count[val]++;
    }

    // Print 
    for (int i = 0; i < 26; i++)
    {
        printf("%c - %d\n", i + 'a', count[i]);
    }
    
    

    return 0;
}