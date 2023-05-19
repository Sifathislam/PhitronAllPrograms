#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <string.h>

void digit_Printer(int num){
    if(num == 0)return;
    int digit = num % 10;
    num = num / 10;
    digit_Printer(num); 
    printf("%d ", digit);
}



int main(){

    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        int num;
        scanf("%d", &num);
        digit_Printer(num);
        if (num == 0)
        {
            printf("0");
        }
        
        printf("\n");
    }
    

    return 0;
}