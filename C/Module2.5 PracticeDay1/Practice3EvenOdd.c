// Practice3 Find Even and Odd number 
#include <stdio.h>

int main(){
    int a;
    scanf("%d", &a);

    if (a % 2 == 0 && a >= 0)
    {
        printf("This %d value is a Even number", a);
    }
    else if (a < 0)
    {
        printf("You type %d a negative integer", a);
    }
    else
    {
        printf("This %d value is a Odd number", a);
    }

    // This how bitwise you can do that 

    if (a & 1)
    {
        printf("\nodd");
    }
    else{
        printf("\neven");
    }
    
    


    return 0; 
}