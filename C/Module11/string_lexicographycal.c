#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <string.h>

int main(){

    char Input_1[100], Input_2[100];

    scanf("%s %s", Input_1, Input_2);
    int i = 0;

    while (1)
    {
        if (Input_1[i] == '\0' && Input_2[i] == '\0')
        {
            printf("Same");
            break;
        }
        else if (Input_1[i] == '\0')
        {
            printf("INPUT1 is small");
            break;
        }
        else if (Input_2[i] == '\0')
        {
            printf("INPUT2 is small");
            break;
        }
        if (Input_1[i] == Input_2[i])
        {
            i++;
        }
        else if (Input_1[i] < Input_2[i])
        {
            printf("INPUT1 is small");
            break;
        }
        else{
            printf("INPUT2 is small");
            break;
        }
        
        
        
    }
    

    return 0;
}