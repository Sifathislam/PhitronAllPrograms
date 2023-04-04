// Practice 4 Positive and negative difiner 
#include <stdio.h>

int main(){
    int a ;
    scanf("%d", &a);
    if (a > 0)
    {
        printf("This %d Number is a positive number", a);
    }
    else if (a == 0){
        printf("This 0 so it have positive or negative");
    }
    else{
        printf("This %d Number is a negative numebr", a);
    }
    
    return 0;
}