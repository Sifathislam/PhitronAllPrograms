#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <string.h>

int main(){
    int count[26] = {0};
    char ch;

    while (scanf("%c", &ch) != EOF)
    {
       count[ch - 'a']++;
    }

    for (char i = 0; i < 26; i++)
     {
        if (count[i] > 0)
        {
        printf("%c : %d\n", i + 97, count[i]);
        }
        }
    

    return 0;
}