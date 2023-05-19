#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <string.h>

int main(){
    // Take Input 
    char a[1001];
    scanf("%s", a);

    // Oparation 
    int size = strlen(a);
    int vowel = 0;
    for (int i = 0; i < size; i++)
    {
        if (a[i] == 'a' || a[i] == 'e' || a[i] == 'i' || a[i] == 'o' || a[i] == 'u')
        {
            vowel++;
        } 
    }

    // Print 
    printf("%d\n", vowel);
    

    return 0;
}