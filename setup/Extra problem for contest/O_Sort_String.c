#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <string.h>
 
int main(){
    // Take input of the arry size 
    int n;
    scanf("%d",  &n);
//  make frequcy arry for count the element of the given string
    int frequncy_arr[26] = {0};
        int i = 0;
    while (i <= n)
    {
        char a;
        scanf("%c", &a);
        int val = a - 'a';
        frequncy_arr[val]++;
        i++;
    }
    
//  Now printf sort arry and how many times a sigle word is here in the arry
    for (int i = 0; i < 26; i++)
    {
        while (frequncy_arr[i] != 0)
        {
            printf("%c", i + 97 );
            frequncy_arr[i]--;
        }
        
    }
    
    return 0;
}